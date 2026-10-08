/**
 * @file    mathutil.cpp
 * @brief   mathutil.h 的实现。
 */
#include "mathutil.h"

long long factorial(int n)
{
    long long r = 1;
    for (int i = 2; i <= n; ++i)
        r *= i;
    return r;
}

bool is_prime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}

long long sum_to(int n)
{
    long long s = 0;
    for (int i = 1; i <= n; ++i)
        s += i;
    return s;
}
