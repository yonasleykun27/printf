#include "main.h"

/**
 * convertToDecimal - Convert base 8 and 16 to base 10
 *
 * Return: Decimal
 */
long long convertToDecimal(int Number, int base)
{
    int decimalNumber = 0, i = 0;

    while(Number != 0)
    {
        decimalNumber += (Number%10) * power(base,i);
        ++i;
        Number/=10;
    }

    i = 1;

    return decimalNumber;
}
