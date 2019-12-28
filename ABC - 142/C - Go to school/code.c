#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int result[n];
    int input[n];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }

    for (int i = 0; i < n; i++)
    {
        c = input[i];
        result[c] = (i + 1);
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}
