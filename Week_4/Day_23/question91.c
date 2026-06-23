#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i, j, count1, count2;
    int anagram = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2))
    {
        anagram = 0;
    }
    else
    {
        for (i = 0; str1[i] != '\0'; i++)
        {
            count1 = 0;
            count2 = 0;

            for (j = 0; str1[j] != '\0'; j++)
            {
                if (str1[i] == str1[j])
                {
                    count1++;
                }

                if (str1[i] == str2[j])
                {
                    count2++;
                }
            }

            if (count1 != count2)
            {
                anagram = 0;
                break;
            }
        }
    }

    if (anagram == 1)
    {
        printf("Strings are Anagrams.\n");
    }
    else
    {
        printf("Strings are Not Anagrams.\n");
    }

    return 0;
}