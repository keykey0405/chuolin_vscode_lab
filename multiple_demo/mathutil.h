/**
 * @file    mathutil.h
 * @brief   示例工程的小工具模块（用来演示"多文件编译"与"跨文件调试"）。
 *
 * 用 <stdbool.h> 而不是 <cstdbool>：前者在 C 与 C++ 下都能用，
 * 这个头文件因此可以被 .c 和 .cpp 同时包含。
 */
#ifndef MATHUTIL_H
#define MATHUTIL_H

#include <stdbool.h>

/** @brief 求 n 的阶乘（要求 0 <= n <= 20，超出会溢出）。 */
long long factorial(int n);

/** @brief 判断 n 是否为素数。 */
bool is_prime(int n);

/** @brief 求 1 + 2 + ... + n。 */
long long sum_to(int n);

#endif /* MATHUTIL_H */
