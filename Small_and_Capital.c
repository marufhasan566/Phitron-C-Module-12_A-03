#include <stdio.h>
#include <string.h>
int main()
{
    char c[1000];
    scanf("%s", c);
    int capital = 0;
    int small = 0;
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] <= 90)
        {
            capital++;
        }
        if (c[i] >= 97)
        {
            small++;
        }
        // printf("%c ", c[i]);
    }
    printf("%d %d", capital, small);
    return 0;
}