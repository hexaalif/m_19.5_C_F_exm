#include <stdio.h>

int main()
{
    float percentage, res_after_percentage;
    scanf("%f %f", &percentage, &res_after_percentage);
    float per_res = (percentage / 100);
    // printf("%d\n", percentage);
    // printf("%f\n", per_res);
    float calc = res_after_percentage / (1 - per_res);
    printf("%.2f", calc);
    return 0;
}