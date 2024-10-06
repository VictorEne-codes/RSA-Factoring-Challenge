#include <stdio.h>

int main()
{
    long long int n = 239809320265259;
    long int f1 = 2;
    long int f2;

    while (f1 <= sqrt(n))
    {
        if (n % f1 == 0)
        {
            f2 = n / f1;
            printf("%lld = %lld * %lld\n", n, f2, f1);
            return 0;
        }
        f1++;
    }

    printf("No factorization found for %lld\n", n);
    return -1;
}
