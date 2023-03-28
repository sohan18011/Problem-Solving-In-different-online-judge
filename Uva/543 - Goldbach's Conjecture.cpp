#include <bits/stdc++.h>
using namespace std;
#define S 100000001

bool prime[S];
int p[6000000], N;

int main()
{
    int i, j, k, s = sqrt(S);
    prime[0] = prime[1] = 1;
    for (i = 2; i <= s; i++)
        if (!prime[i])
            for (k = (S - 1) / i, j = i * k; k >= i; k--, j -= i)
                if (!prime[k]) prime[j] = 1;
    p[N++] = 2;
    for (i = 3; i < S; i += 2)
        if (!prime[i]) p[N++] = i;
    int n;
    while (scanf("%d", &n) == 1)
    {
        int a = 0, b = 0;
        if (n & 1)
        {
            if (n > 3 && !prime[n - 2]) a = 2, b = n - 2;
        }
        else
        {
            i = std::lower_bound(p, p + N, n >> 1) - p;
            while (p[i] >= n >> 1) i--;
            for (; i >= 0; i--)
            {
                j = std::upper_bound(p, p + N, n - p[i]) - p;
                j--;
                if (i != j && p[i] + p[j] == n)
                {
                    a = p[i], b = p[j];
                    break;
                }
            }
        }
        if (a) printf("%d is the sum of %d and %d.\n", n, a, b);
        else printf("%d is not the sum of two primes!\n", n);
    }
    return 0;
}
