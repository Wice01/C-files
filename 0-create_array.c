#include "main.h"                                                                                                                                      
#include <stdio.h>
#include <stdlib.h>                                                                                                                                     
                                                                                                                                                       
/**                                                                                                                                                    
 * create_array - creates an array of characters                                                                                                       
 * @size: size of array                                                                                                                                
 * @c: character                                                                                                                                       
 */                                                                                                                                                    
                                                                                                                                                       
char *create_array(unsigned int size, char c)                                                                                                          
{                                                                                                                                                      
        int i;                                                                                                                                
        char *p;   

        p = (char*)malloc(size*sizeof(char));                                                                                                  
        p[0] = c;                                                                                                                                       
        i = 0;                                                                                                                                         
                                                                                                                                              
        if(size = 0)                                                                                                                                   
        {                                                                                                                                              
                return (NULL);                                                                                                                         
        }                                                                                                                                              
        for(; i < size; i++)                                                                                                                           
        {                                                                                                                                              
                printf("%c", &p);                                                                                                                      
        } 
}
