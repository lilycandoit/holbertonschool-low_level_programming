#include "main.h"

/**
* _strncpy - copy string with n characters
*
* @dest: the final (destination) string
* @src: the string will be coppied
* @n: number of characters to be copied from src
*
* Return: the pointer of dest
*/

char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    /* Copy characters from src to dest */
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    /* in case characters in src < n */
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }



    return (dest);
}

