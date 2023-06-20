#include <stdio.h>

int main(void)
{
    char c[] = "_putchar\n";
    int i;

    for (i = 0; c[i] != '\0'; i++)
    {
        putchar(c[i]);
    }

    return 0;
}
