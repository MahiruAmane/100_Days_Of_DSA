// Write a C Program To Perform Exponentiation Of A Number With Recursion.

#include <stdio.h>

int power(int base, int exponent) 
    {
        if (exponent == 0) 
        {
            return 1;
        } 
        else 
        {
            return base * power(base, exponent - 1);
        }
    }

int main()
{
    int base;
    int exponent;
    int result;

    printf("Please Enter The Base : ");
    scanf("%d", &base);

    printf("Please Enter The Exponent : ");
    scanf("%d", &exponent);

    result = power(base, exponent);
    printf("Result After Exponentiation : %d", result);

    return 0;
}