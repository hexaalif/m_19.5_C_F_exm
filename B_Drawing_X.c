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
            if (j % 2 != 0)
            {

                printf("\\");
            }
            else
            {
                printf("*");
            }
        }
        for (int j = 1; j <= n; j++)
        {
        }
        printf("\n");
        // n++;
    }
    return 0;
}