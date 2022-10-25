官网：https://download.qt.io/archive/qt/5.9/5.9.6/

http://c.biancheng.net/view/3851.html


使用 VS 编译 QT 源码
https://blog.csdn.net/xh_acmagic/article/details/107965063


1. qt-everywhere-opensource-src-5.9.6.zip 是从 https://download.qt.io/archive/qt/5.9/5.9.6/ 下载而来的。下载时间【北京时间2022-08-06】
2. qt-5.9.6 目录下的代码是由 qt-everywhere-opensource-src-5.9.6.zip 重构而来的，重构时间【北京时间2022-08-06】
3. 部分项目依赖项没有配置


1.错误问题：
C:\Users\Administrator\AppData\Local\QtMsBuild\qt_vars.targets(246,5): error : 此编译的源文件可以在以下位置找到:“C:\Users\Administrator\AppData\Local\Temp\88bf35cb-38ce-41c4-a691-27d54fc325ed.txt”
1.解决方法：
安装.net4.7新版可以解决问题
