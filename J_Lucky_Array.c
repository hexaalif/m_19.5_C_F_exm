#include <stdio.h>
#include <limits.h>
// #define int long long
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], count = 0;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] == min)
        {
            count++;
        }
    }
    if (count % 2 != 0)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }
    return 0;
}
// printf("%d", count);
// for (int i = 0; i < n; i++)
// {
//     printf("%d ", a[i]);
// }

// for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }