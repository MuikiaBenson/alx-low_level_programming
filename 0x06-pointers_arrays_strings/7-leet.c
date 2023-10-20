#include "main.h"

/**
 * leet - encode into 1337speak
 * @c: string
 * Return: value (c)
 */

char *leet(char *c)
{
        int a, b;

        char s1[] = "aAeEoOtTlL";
        char s2[] = "4433007711";

        for (a = 0; c[a]; a++)
        {
                for (b = 0; b < 10; b++)
                {
                        if (c[a] == s1[b])
                        {
                                c[a] = s2[b];
                        }
                }
        }
        return (c);
}
