#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_digit_string - Checks if a string contains only digits
 * @str: The string to check
 *
 * Return: 1 if string contains only digits, 0 otherwise
 */
int is_digit_string(char *str)
{
    /* Check each character in the string */
    if (str == NULL || *str == '\0')
        return 0;

    while (*str)
    {
        if (!isdigit(*str))
            return 0;  /* Not a digit */
        str++;
    }
    return 1;  /* All characters are digits */
}

/**
 * error_exit - Prints error message and exits
 */
void error_exit(void)
{
    printf("Error\n");
    exit(98);
}

/**
 * multiply_large_numbers - Multiplies two large numbers represented as strings
 * @num1: First number as a string
 * @num2: Second number as a string
 *
 * Return: Result of multiplication as a dynamically allocated string
 */
char *multiply_large_numbers(char *num1, char *num2)
{
    int len1, len2, i, j, carry, n1, n2, sum;
    char *result;

    /* Get lengths of both strings */
    len1 = strlen(num1);
    len2 = strlen(num2);

    /* Allocate memory for result - it can have at most len1+len2 digits */
    result = calloc(len1 + len2 + 1, sizeof(char));
    if (result == NULL)
        error_exit();

    /* Initialize result array with zeros */
    for (i = 0; i < len1 + len2; i++)
        result[i] = '0';
    result[len1 + len2] = '\0';

    /* Multiply each digit and add to result */
    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        n1 = num1[i] - '0';

        /* Shift position based on digit position in first number */
        for (j = len2 - 1; j >= 0; j--)
        {
            n2 = num2[j] - '0';

            /* Multiply and add previous carry */
            sum = n1 * n2 + (result[i + j + 1] - '0') + carry;

            /* Debug - print correct values */
            printf("Multiplying %d * %d + previous_result %c + carry %d = %d\n",
                n1, n2, result[i + j + 1], carry, sum);

            /* Update carry */
            carry = sum / 10;

            /* Store result */
            result[i + j + 1] = (sum % 10) + '0';

            /* Debug - print the current digit result */
            printf("Position result[%d] = %c (ASCII: %d)\n",
                   i+j+1, result[i + j + 1], result[i + j + 1]);

            /* Debug - print the current partial result string */
            printf("Current result: %s\n", result);
        }

        /* Add remaining carry */
        if (carry > 0)
            result[i + j + 1] = ((result[i + j + 1] - '0') + carry) + '0';
            printf("Adding final carry %d at position %d = %c\n",
                carry, i+j+1, result[i + j + 1]);
    }

    /* Remove leading zeros */
    i = 0;
    while (result[i] == '0' && result[i + 1] != '\0')
        i++;

    if (i > 0)
    {
        memmove(result, result + i, strlen(result) - i + 1);
    }

    printf("Final result after removing leading zeros: %s\n", result);
    return result;
}

/**
 * main - Entry point for multiplication program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    char *result;

    /* Check if exactly 3 arguments (program name + 2 numbers) */
    if (argc != 3)
        error_exit();

    /* Validate that both arguments contain only digits */
    if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
        error_exit();

    /* Handle special case: if either number is 0, result is 0 */
    if (argv[1][0] == '0' || argv[2][0] == '0')
    {
        printf("0\n");
        return 0;
    }

    /* Multiply the large numbers */
    result = multiply_large_numbers(argv[1], argv[2]);

    /* Print the result followed by a newline */
    printf("%s\n", result);

    /* Free allocated memory */
    free(result);

    return 0;
}