#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char longest[100] = "";
    char word[100];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            word[j] = '\0';

            if (strlen(word) > strlen(longest))
            {
                strcpy(longest, word);
            }

            j = 0;

            if (str[i] == '\0')
            {
                break;
            }
        }

        i++;
    }

    printf("Longest word = %s", longest);

    return 0;
}