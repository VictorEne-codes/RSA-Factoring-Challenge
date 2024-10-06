#include <stdio.h>

int main()
{
    long long int n = 239809320265259;
    long int f1 = 2;
    long int f2;

    while (n % f1)
    {
        if (f1 <= n)
        {
            f1++;
        }
        else {
            return (-1);
        }
    }

    f2 = n / f1;
    printf("%lld = %ld * %ld\n", n, f2, f1);
    return (0);
}
