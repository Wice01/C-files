#include <stdio.h>
#include "main.h"

int main()
{
    char string[] = {"Hello World"};

    int length;

    length = len(string);
    printf("%d", length);
}