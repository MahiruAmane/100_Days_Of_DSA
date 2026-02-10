// Write a C Program To Reverse a Given String.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];

    printf("Please Enter a String : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int i = 0;
    int j = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    i--;

    while (i >= 0)
    {
        rev[j] = str[i];
        i--;
        j++;
    }

    rev[j] = '\0';
    printf("Reverse Of The String Is : %s", rev);

    return 0;
}