#include<stdio.h>
#include<stdarg.h>

/**
 * print_numbers - to print argument numbers
 * @separator: the separator between each argument
 * @n: the number of the arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start(args, n);

    if (separator == NULL)
        return;

    for (i = 0; i < n; i++)
    {
        int x = va_arg(args, int);
        printf("%d", x);

        if (separator != NULL && i < n-1)
        {
            printf("%s", separator);
        }
    }

    printf("\n");

    va_end(args);

}

