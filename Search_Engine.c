#include <stdio.h>

int main()
{
    int t, j;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        int s;

        scanf("%d", &s);
        int f = 0;
        for (int k = 0; k < n; k++)
        {

            if (a[k] == s)
            {
                printf("Case %d: %d\n", i, k + 1);
                f = 1;
                break;
            }
        }
        // for(int k)
        if (f == 0)
        {

            printf("Case %d: Not Found\n", i);
        }
    }
    return 0;
}
