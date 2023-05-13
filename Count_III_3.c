// My Solution in 14-May-2023 || 1:07 AM

#include <stdio.h>
#include <string.h>
int main()
{
    char c[1000];
    scanf("%s", c);
    int count[26] = {0};
    for (int i = 0; i < strlen(c); i++)
    {
        // printf("%c\n",c[i]);
        int index = c[i] - 'a';
        count[index]++;
    }
    for (int i = 0; i < 26; i++)
    {
        int index = i + 'a';
        printf("%c - %d\n", index, count[i]);
    }

    return 0;
}