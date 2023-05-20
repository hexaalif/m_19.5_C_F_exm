#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s = n;
    if (n % 2 != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= s; j++)
            {
                if (i == (n / 2) + 1)
                {
                    printf("#");
                }
                else
                {
                    // if (j % 2 == 0)
                    // {
                    if (j == (n + 1) / 2)
                    {
                        printf("#");
                    }
                    else
                    {
                        printf("*");
                    }

                    // else
                    // {
                    //     printf("*");
                    // }
                }
            }
            printf("\n");
        }
    }

    return 0;
}