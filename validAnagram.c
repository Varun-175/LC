#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool checkAnagram(char *s1, char *s2) 
{
    if (strlen(s1) != strlen(s2)) 
    {
        return false;
    }

    int charCount[26] = {0},i;

    for (i = 0; s1[i] != '\0'; i++) 
    {
        charCount[s1[i] - 'a']++;
        charCount[s2[i] - 'a']--;
    }

    for (i = 0; i < 26; i++) 
    {
        if (charCount[i] != 0) 
        {
            return false;
        }
    }

    return true;
}

int main() 
{
    char str1[100];
    char str2[100];

    printf("\nEnter the 1st string: ");
    scanf("%s",str1);
    printf("\nEnter the 2nd string: ");
    scanf("%s",str2);

    if (checkAnagram(str1, str2)) 
    {
        printf("True\n");
    } 
    else 
    {
        printf("False\n");
    }

    return 0;
}
