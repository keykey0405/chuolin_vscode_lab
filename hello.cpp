/**
 * @file    hello.cpp
 * @brief   单文件入门示例：验证"编译 → 运行 → 调试"整条链路是否打通。
 *
 * 打开这个文件，按 Ctrl+Shift+B 生成，按 F5 调试。
 */
#include <iostream>
#include <windows.h>


int main()
{
    SetConsoleOutputCP(CP_UTF8); /*为了不出现中文乱码*/

    std::cout << "Hello, VS Code + MinGW-w64!" << std::endl;
    std::cout << "中文输出测试：如果你能看懂这句话，说明编码配置正确。" << std::endl;

    int sum = 0;
    for (int i = 1; i <= 100; ++i)
        sum += i;                       /* 在这一行打上断点，按 F5 观察 sum 的变化 */

    std::cout << "1 + 2 + ... + 100 = " << sum << std::endl;
    return 0;
}
