#include "mainwidget.h"
#include "ui_mainwidget.h"
#include <QDebug>
#include <QTime>
#include <QMessageBox>
#include <QPushButton>

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    this->setWindowTitle("Keep By Merlin");


    //0.设置第一个页面
    //ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->setCurrentWidget(ui->pageSet);


    //1.初始化数据(游戏时间长度选择)
    for(int i=1; i<=4; i *= 2) { //1,2,4
        ui->comboBox->addItem(QString::number(i*100));
    }

    //2. 初始化动画(胜利，失败动画)
    //初始化 动画 page (Win and Lose)
    loseMovie.setFileName(":/new/prefix1/lose.gif");
    winMovie.setFileName(":/new/prefix1/win.gif");
    //给标签设置动画(自适应)
    ui->labelLose->setMovie(&loseMovie);
    ui->labelWin->setMovie(&winMovie);
    ui->labelLose->setScaledContents(true);
    ui->labelWin->setScaledContents(true);


    //3. 游戏界面槽函数绑定
    connect(ui->pushButton_0, &QPushButton::clicked, this, &MainWidget::dealNum);
    connect(ui->pushButton_1, &QPushButton::clicked, this, &MainWidget::dealNum);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWidget::dealNum);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWidget::dealNum);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWidget::dealNum);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &MainWidget::dealNum);
    connect(ui->pushButton_6, &QPushButton::clicked, this, &MainWidget::dealNum);
    connect(ui->pushButton_7, &QPushButton::clicked, this, &MainWidget::dealNum);
    connect(ui->pushButton_8, &QPushButton::clicked, this, &MainWidget::dealNum);
    connect(ui->pushButton_9, &QPushButton::clicked, this, &MainWidget::dealNum);

    //4. 显示组件设置
    ui->lineEdit->setEnabled(false);
    ui->lineEdit->setAlignment(Qt::AlignRight);
}

MainWidget::~MainWidget()
{
    delete ui;
}


//数字键处理
void MainWidget::dealNum()
{
    //获取button
    QPushButton *btn = static_cast<QPushButton *>( this->sender() );
    if( NULL != btn ) {
        //获取按键内容
        QString numStr = btn->text();
        resultStr.append(numStr);//显示输入的数字

        //特殊处理 (输入0开头, 输入的数字不足 4 位数)
        if (resultStr.size() == 1 && resultStr=="0") {
            resultStr.clear();
        }

        if ( resultStr.size() <= 4 ) {

            //小于 4 位的情况
            ui->lineEdit->setText(resultStr);
            //刚好输入到第4位
            if( resultStr.size() == 4 ) {
                //提示(直接字符串比较)
                if(resultStr > randStr) {
                    QMessageBox::information(this, "Hint", resultStr + ", 数字太大！");
                } else if ( resultStr < randStr ) {
                    QMessageBox::information(this, "Hint", resultStr + ", 数字太小！");
                } else { //相等的情况
                    killTimer(gameTimerId); //关闭游戏计时器(进度条不再改变)
                    QMessageBox::information(this, "恭喜", "猜中了！");
                    ui->stackedWidget->setCurrentWidget(ui->pageWin);
                    winMovie.start();
                    winTimerId = startTimer(5000);
                }
                resultStr.clear();
                //ui->lineEdit->clear(); //下次输入自然清空了
            }
        }
    }
}


//开始游戏按键处理
void MainWidget::on_pushButtonStart_clicked()
{
    //拿到游戏时间(数字)--设置进度条用
    gameTime = ui->comboBox->currentText().toInt();
    qDebug() << gameTime << "秒";

    //初始化游戏界面
    ui->stackedWidget->setCurrentWidget(ui->pageGame);
    //初始化用户输入结果以及显示结果
    this->resultStr.clear();
    ui->lineEdit->clear();


    //准备好要猜的随机数
    int num;
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    while( (num=qrand()%10000) < 999 ); // 1000 ~ 9999 (保证其是 4 位数)
    this->randStr = QString::number(num);
    qDebug() << "randNum: " << this->randStr;

    //设置启动游戏定时器
    gameTimerId = startTimer(1000); //1秒后触发

    //设置进度条(倒计时)
    ui->progressBar->setMinimum(0); //最小值
    ui->progressBar->setMaximum(gameTime); //最大值
    ui->progressBar->setValue(gameTime);//当前值(开始的时候就是最大值)

}

//关闭按键
void MainWidget::on_pushButtonEnd_clicked()
{
    this->close();
}

//计时器处理
void MainWidget::timerEvent(QTimerEvent *e)
{
    //3个定时器的处理： 游戏倒计时，成功动画倒计时，失败动画倒计时
    if (e->timerId() == gameTimerId ) {//游戏时间定时器处理
        gameTime--;
        ui->progressBar->setValue(gameTime);

        if(gameTime==0) {
            //关闭定时器
            killTimer(gameTimerId);
            QMessageBox::information(this,"你输了","Time is up.");

            //切换到失败页面, 启动失败动画
            ui->stackedWidget->setCurrentWidget(ui->pageLose);
            loseMovie.start();
            loseTimerId = startTimer(5000);

        }
    } else if (e->timerId() == loseTimerId) { //失败动画计时器
        killTimer(loseTimerId);
        loseMovie.stop();
        ui->stackedWidget->setCurrentWidget(ui->pageSet);//切回游戏
    } else { //成功动画计时器
        killTimer(winTimerId);
        winMovie.stop();
        ui->stackedWidget->setCurrentWidget(ui->pageSet);//切回主界面
    }

}

//回退按钮的处理
void MainWidget::on_pushButton_back_clicked()
{
    if(resultStr.size()==1) { //只有1位数字直接清空
        resultStr.clear();
        ui->lineEdit->clear();
    } else {
        resultStr = ui->lineEdit->text(); //这里处理特殊回退按键(已经输入了4个)
        resultStr.chop(1); //相当于 resultStr[resultStr.size() -1]='\0';
        ui->lineEdit->setText(resultStr);
    }
}

//放弃按钮的处理
void MainWidget::on_pushButton_quit_clicked()
{
    //关闭游戏计时器
    killTimer(gameTimerId);
    resultStr.clear();
    ui->lineEdit->clear();
    //放弃，提示一下最终答案
    QMessageBox::information(this,"结果：","最终答案是:"+randStr);
    ui->stackedWidget->setCurrentWidget(ui->pageSet);

}
