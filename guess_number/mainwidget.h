#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QString>
#include <QMovie>
#include <QTimer>
#include <QTimerEvent>




namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

    void dealNum(); //自定义槽函数, 处理数字

private slots:


    void on_pushButtonStart_clicked();

    void on_pushButtonEnd_clicked();

    void on_pushButton_quit_clicked();

    void on_pushButton_back_clicked();
    
protected:
    void timerEvent(QTimerEvent *e); //3个计时器的事件处理器

private:
    Ui::MainWidget *ui;

    int gameTime;
    QString randStr; //随机数(字符串)

    //计数器
    int gameTimerId; //游戏时间计时器
    int loseTimerId; //失败动画计时器
    int winTimerId;  //成功动画计时器

    //显示结果
    QString resultStr;
    QMovie loseMovie; //失败动画
    QMovie winMovie; //成功动画
};

#endif // MAINWIDGET_H
