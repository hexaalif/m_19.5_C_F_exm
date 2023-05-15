#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (n % 2 == 0)
        {
            if (i == (n - 1) / 2 || i == (((n - 1) / 2) + 1))
            {
                printf("%d ", a[i]);
            }
        }
        else
        {

            if (i == ((n - 1) + 1) / 2)
            {
                printf("%d ", a[i]);
            }
        }
    }
    return 0;
}