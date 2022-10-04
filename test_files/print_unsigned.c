#include "main.h"

int print_unsigned(unsigned int value){
   int count = 0;
  
    /* First remove the last digit of number and print 
    the remaining digits using recursion, then print
    the last digit
 */
    if (value/10)
        count += print_decimal(value/10);
  
    count += _putchar(value%10 + '0');

    return (count);
}