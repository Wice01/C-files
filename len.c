#include <stdio.h>

int len(char* c)
{
    int charCount;

    while(c[charCount] != '\0')
    {
        charCount++;
    }
    return charCount;
}