#include "mathutil.h"
#include <vector>

std::vector<long long> factorials(int n)
{
    std::vector<long long> out;
    long long r = 1;
    for (int i = 1; i <= n; ++i)
    {
        r *= i;
        out.push_back(r);
    }
    return out;
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
