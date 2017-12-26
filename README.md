# Qt小项目:猜数字游戏

Small Qt GUI Program for green-hand with comments

## 简单说明

平台： MacOs, Qt5.5x64
控件: StackWidget, lineEdit, ComboBox, ProgressBar, PushButton, QMovie等

没有太复杂的算法, 纯粹的练手项目, 主要玩的就是计时器和槽函数，事件处理。
(大项目也是小功能的堆叠，只是可能问题规模不一样)

注意 QMessageBox 是模态的，所以有时需要先停止计时器，然后再弹出对话框.

玩法：指定好时间，开始猜(这里固定 4 位数)；程序自动提示您输入的数字是否正确，大了，小了。

(比较难猜中，可以开始的时候把事件指定长一点儿；当然也可以直接放弃，它会提示您的)

## 运行截图

具体的截图如下(我是在mac上跑的，其他平台可能需要重新编译)

![](http://omotkhw3y.bkt.clouddn.com/2017-12-26-guessnum1.jpg)
![](http://omotkhw3y.bkt.clouddn.com/2017-12-26-guessnum2.jpg)
![](http://omotkhw3y.bkt.clouddn.com/2017-12-26-guessnum3.jpg)
![](http://omotkhw3y.bkt.clouddn.com/2017-12-26-guessnum4.jpg)
![](http://omotkhw3y.bkt.clouddn.com/2017-12-26-guessnum5.jpg)
![](http://omotkhw3y.bkt.clouddn.com/2017-12-26-guessnum6.jpg)

## 后门

__这么难猜，肯定玩不了嘛...__.
所以我告诉你一个后门儿, 命令如下：

```bash
./guess_number 2>&1 | tee run.log
```

(此时可以看到我留下的后门)

在 macOS 下则不要用 open 命令运行, 而是找到具体的可执行文件再跑.
例如：

![](http://omotkhw3y.bkt.clouddn.com/2017-12-26-guessnum_back.jpg)

## FYI

代码已经分享，带有项目注释. 任何问题，请发我 gmail.
