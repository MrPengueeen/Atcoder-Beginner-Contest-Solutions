#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long n;
    scanf("%lu", &n);
    unsigned long int a, b, steps, ans;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            a = i;
            b = n / a;
            steps = a + b - 2;
            if (i == 1)
            {
                ans = steps;
            }
            else
            {
                if (steps < ans)
                {
                    ans = steps;
                }
            }
        }
    }

    printf("%lu", ans);

    return 0;
}