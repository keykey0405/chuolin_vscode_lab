/**
 * @file    main.cpp
 * @brief   示例工程主程序：演示编译、运行、断点调试与中文输出。
 *
 * 用法：在 VS Code 里按 Ctrl+Shift+B 生成，按 F5 调试。
 */
#include "mathutil.h"

#include <cstdio>
#include <vector>

/**
 * @brief 对 1..n 逐个求阶乘，返回结果表。
 *
 * 在下面这个函数的 for 行打一个断点，按 F5 就能看到 i 和 r 的变化，
 * 这是演示"变量监视 / 单步执行"最直观的例子。
 */
static std::vector<long long> factorials(int n)
{
    std::vector<long long> out;
    for (int i = 1; i <= n; ++i)
        out.push_back(factorial(i));
    return out;
}

int main()
{
    std::printf("=== VS Code + MinGW-w64 环境自检 ===\n");

    const int n = 10;
    std::printf("1 到 %d 的和 = %lld\n", n, sum_to(n));

    std::vector<long long> f = factorials(n);
    std::printf("%d! = %lld\n", n, f.back());

    std::printf("10 以内的素数：");
    for (int i = 2; i <= 10; ++i)
        if (is_prime(i)) std::printf("%d ", i);
    std::printf("\n");

    std::printf("中文显示正常，环境配置成功。\n");
    return 0;
}
