#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s = n, k = n - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == (n / 2) + 1)
            {
                if (j == (n / 2) + 1)
                {
                    printf("X");
                }
                else
                {
                    printf("*");
                }
            }
            else if (j == i)
            {
                printf("\\");
            }
            else if (j == (n + 1 - i))
            {
                printf("/");
            }
            else
            {
                printf("*");
            }
        }

        printf("\n");
        // n++;
    }
    return 0;
}