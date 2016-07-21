/********
 * CS50 AP
 * Code Examples
 * Module 4-8: Version Control
 * Version A: Edited by Programmer A
*********/
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    // Print a diamond with user entered height!
    printf("Height: ");
    int height = GetInt();
    
    // print the top half
    for(int i = 0; i < height / 2; i++)
    {
        for (int q = 0; q < (height / 2) - i; q++)
        {
            printf(" ");
        }
        for (int q = 0; q < i * 2 + 1; q++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < height / 2; i++)
    {
        
    }
}