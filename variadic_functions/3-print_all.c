#include<stdio.h>
#include<stdarg.h>
#include<string.h>

/*struct for mapping format specifiers to functions */
typedef struct format
    {
        char c;
        void (*f)(va_list);
    } ft;

/* functions to print different types */
void print_char(va_list args)
{
    printf("%c", va_arg(args, int));  /* in variadic function, 'char' is promoted to 'int' */
}

void print_int(va_list args)
{
    printf("%d", va_arg(args, int));
}

void print_float(va_list args)
{
    printf("%f", va_arg(args, double));  /* in variadic function, 'float' is promoted to 'double' */
}

void print_string(va_list args)
{
    char *s = va_arg(args, char *);
    s = s ? s : "(nil)";
    printf("%s", s);
}

/* function to get correct function pointer */
void (*get_type(char c))(va_list)
{
    ft all_types[] = {
        {'c', print_char},
        {'i', print_int},
        {'f', print_float},
        {'s', print_string},
        {'\0', NULL}
    };

    int i = 0;

        while (all_types[i].c != '\0')
        {
            if (all_types[i].c == c)
                return (all_types[i].f);

            i++;

        }

    return (NULL);
}

/* the main print_all function  */
/**
* print_all - print all the arguments passed to the function
* @format: any type of arguments passed in function
* Retunr: void
*/
void print_all(const char * const format,  ...)
{
    va_list args;
    unsigned int i = 0;
    char *separator = "";

    va_start(args, format);

    while (format && format[i])
    {
        void (*func)(va_list) = get_type(format[i]);

        if (func)
        {
            printf("%s", separator); /* print separator before next value */
            func(args);
            separator = ", "; /*update separator after 1 element */
        }
        i++;

    }

    printf("\n");  /* Print a newline at the end */

    va_end(args);  /* Clean up the va_list */

}

