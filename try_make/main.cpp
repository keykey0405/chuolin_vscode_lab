#include <iostream>
#include "calc.h"
using namespace std;
int main() 
{
    std::cout << add(7,10) << std::endl;
    return 0;
}
/*我直接按了shift+ctrl+b的话会报错，上面弹出来的是g++生成活动文件
我摁了只会编译当前文件，不会编译所有文件
方法1：g++ main.cpp calc.cpp -o app两个文件都能编译
方法2：新建一个tasks 注意要放在.vscode文件夹里不然没用
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "build",
            "type": "shell",
            "command": "g++ main.cpp calc.cpp -o app",
            "args": [],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": "$gcc"
        }
    ]
}
*/
/*
mingw32-make → 编译，生成 app.exe
.\app.exe → 运行程序看结果
mingw32-make clean → 删除 app.exe，清理产物*/
/*  git add .
git commit -m "写你的提交备注，比如：完成多文件C++调试"
git push origin 你的？支名*/
