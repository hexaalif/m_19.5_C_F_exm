#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > min)
        {
            min = a[i];
        }
    }
    // printf("%d", min);
    for (int i = 0; i < n; i++)
    {
        int j = min - a[i];
        printf("%d ", j);
    }

    return 0;
}