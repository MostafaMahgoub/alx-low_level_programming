#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    unsigned int len = 0;
    while (*s != '\0' && *accept != '\0' && *s == *accept)
    {
        len++;
        s++;
        accept++;
    }
    return (len);
}
