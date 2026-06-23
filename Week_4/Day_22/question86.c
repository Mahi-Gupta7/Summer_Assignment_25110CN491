#include <stdio.h>

int main()
{
    char str[200];
    int i, count = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((i == 0 && str[i] != ' ') ||
            (str[i] != ' ' && str[i - 1] == ' '))
        {
            count++;
        }
    }

    printf("Total Words = %d", count);

    return 0;
}