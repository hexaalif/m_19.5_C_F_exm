#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    gets(s);
    int cap = 0, sm = 0, space = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cap++;
            // printf("Capital - %d\n", );
        }
        else if (s[i] >= 'a' && s[i] < 'z')
        {
            sm++;
        }
        else if (s[i] == ' ')
        {
            space++;
        }
    }
    printf("Capital - %d\n", cap);
    printf("Small - %d\n", sm);
    printf("Spaces - %d", space);
    return 0;
}