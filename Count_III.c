// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char c[1000];
//     scanf("%s", c);
//     int sum;
//     for (int i = 0; i < strlen(c); i++)
//     {
//         printf("%c ", c[i]);
//     }
// }

// From ChatGPT
// I Dont understand that very much
#include <stdio.h>

int main()
{
    char C[1000];
    int count[26] = {0};

    scanf("%s", C);

    for (int i = 0; C[i] != '\0'; i++)
    {
        int index = C[i] - 'a';
        count[index]++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", 'a' + i, count[i]);
    }

    return 0;
}
