/**
 * @file   main.cpp
 * @brief  示例工程主程序：演示编译、运行、断点调试与中文
 *
 * 用法: 在 VS Code 里按 Ctrl+Shift+B 生成, 按 F5 调试。
 */
#include "mathutil.h"
#include <cstdio>
#include <vector>

int main()
{
    std::printf("=== VS Code + MinGW-w64 环境自检 ===\n");

    const int n = 10;
    std::printf("1 到 %d 的和 = %lld\n", n, sum_to(n));

    std::vector<long long> f = factorials(n);
    std::printf("%d! = %lld\n", n, f.back());

    std::printf("10 以内的素数: ");
    for (int i = 2; i <= 10; ++i)
    {
        if (is_prime(i))
            std::printf("%d ", i);
    }
    std::printf("\n");

    std::printf("中文显示正常，环境配置成功。\n");
    return 0;
}
/*先补路径 cd demo\multiple_demo
.\main.exe   */