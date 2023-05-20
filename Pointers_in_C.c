#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void update(int *a, int *b)
{
    // Complete this function
    int sum = *a + *b;
    int diff = abs(*a - *b);
    printf("%d\n", sum);
    printf("%d", diff);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}