#include <stdio.h>
#include <string.h>
int main()
{
    char c[1000];
    scanf("%s", c);
    int count[26] = {0};
    for (int i = 0; i < strlen(c); i++)
    {
        int index = c[i] - 'a';
        count[index] = count[index] + 1;
        // printf("%d ", index);
        // printf("%d ", count[index]);
    }
    for (int i = 0; i < 26; i++)
    {
        // printf("%d\n", count[i]);
        // printf("%c\n", 'a' + i);
        printf("%c - %d\n", 'a' + i, count[i]);
    }
    return 0;
}