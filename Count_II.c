#include <stdio.h>
#include <string.h>
int main()
{
    char c[1000];
    scanf("%s", c);
    int sum = 0;
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u')
        {
            sum++;
        }
    }
    printf("%d", sum);
    return 0;
}