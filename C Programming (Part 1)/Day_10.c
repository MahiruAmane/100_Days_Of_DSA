// Write a C Program To Check If a String is a Palindrome or Not.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Please Enter a String : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    int isPalindrome = 1;
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
    {
        printf("The Given String Is a Palindrome");
    }
    else
    {
        printf("The Given String Is Not a Palindrome");
    }

    return 0;
}