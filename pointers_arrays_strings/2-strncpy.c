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

    /* This way is copy directly */
    while (i < n && (dest[i] = src[i]) != '\0')
    {
        i++;
    }

    return (dest);
}

