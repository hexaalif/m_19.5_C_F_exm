#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // int i = 0;
    int sum = 0;
    // while (n)
    // {
    //     sum += n % 10;
    //     n /= 10;
    //     // i++;
    // }
    for (; n > 0;)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    printf("%d", sum);
    return 0;
}