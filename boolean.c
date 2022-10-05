#include <stdbool.h>
#include <stdio.h>

int main()
{
    bool rainfall;

    rainfall = 5;
    if(rainfall == true)
    {
        printf("It is a cold day");
    } // < > != == <= >=
    else if(rainfall != true)
    {
        printf("It is a hot day");
    }
    return (0);
}