#include <stdio.h>

int main()
{
    int size = 9;
    int const colomn = 5;
    int Grades[9][5] = {
        {56, 67, 89, 40, 90, 78, 23, 45, 87, 88},
        {09, 98, 87, 76, 65, 54, 43, 32, 21, 10},
        {12, 23, 34, 45, 56, 67, 78, 89, 90, 91},
        {77, 88, 99, 55, 66, 44, 33, 22, 11, 00},
        {65, 32, 34, 45, 65, 76, 87, 90, 09, 44},
        {45, 67, 87, 90, 54, 34, 23, 12, 43, 78}
    };
    int i, j;

    for(i = 0; i < size; i++)
    {
       for(j =0; j < colomn; j++)
       {
        printf("(%d)", Grades[i][j]);
       } 
    }

}