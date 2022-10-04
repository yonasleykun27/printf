#include <stdarg.h>
#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...){
  int count = 0, i;
  
  va_list data;
  va_start(data, format);

  /* _printf("%s", 'Hello') */
  
  for (i = 0; format[i] != '\0'; ){
    
    /* count the number of characters */
    /* print to the screen each character counted */
    if (format[i] != '%'){
      count += _putchar(format[i]);
      i++;
    }
    else if (format[i] == '%' && format[i+1] !=' '){
      switch (format[i + 1]){
        case 'c':
            /* print the character from the va_arguments */
            count += _putchar(va_arg(data, int));
            break;
        case 's':
            count += print_string(va_arg(data, char *));
            break;
        case '%':
            /* print the character from the va_arguments */
            count += _putchar('%');
            break;
        case 'd':
            count += print_decimal(va_arg(data, int));
            break;
        case 'i':
            count += print_decimal(va_arg(data, int));
            break;
        case 'b':
            count += print_binary(va_arg(data, int));
            break;
        case 'u':
            count += print_unsigned(va_arg(data, unsigned int));
            break;
        default:
            break;
      }
      
      i += 2;
    }
    
    
  }
  

  return (count);
}