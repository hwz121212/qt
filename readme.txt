官网：https://download.qt.io/archive/qt/5.9/5.9.6/
https://download.qt.io/new_archive/qt/5.9/5.9.6/

1. qt-everywhere-opensource-src-5.9.6.zip 是从 https://download.qt.io/archive/qt/5.9/5.9.6/ 下载而来的。下载时间【北京时间2022-08-06】
2. qt-5.9.6 目录下的代码是由 qt-everywhere-opensource-src-5.9.6.zip 重构而来的，重构时间【北京时间2022-08-06】
3. 部分项目依赖项没有配置


在电脑win10操作系统上安装以下软件：
1. vs2017(VS_Community2017_15.9.50)
2. qt-opensource-windows-x86-5.9.6.exe
3. qt-vsaddin-msvc2017-2.4.1-rev.25.vsix
4. .net4.7
5. 配置msvc2017_64  C:\Qt\Qt5.9.6\5.9.6\msvc2017_64 (具体的配置可以百度查阅vs+qt开发环境配置)



参考资料：

1.错误问题：
C:\Users\Administrator\AppData\Local\QtMsBuild\qt_vars.targets(246,5): error : 此编译的源文件可以在以下位置找到:“C:\Users\Administrator\AppData\Local\Temp\88bf35cb-38ce-41c4-a691-27d54fc325ed.txt”
1.解决方法：
安装.net4.7新版可以解决问题

2. 使用 VS 编译 QT 源码 https://blog.csdn.net/xh_acmagic/article/details/107965063

3. http://c.biancheng.net/view/3851.html