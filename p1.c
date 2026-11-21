#include<stdio.h>

void printLine(void);// FUNCTION DECLARATION

int main()
{
    printLine();
    printf("Printing a line of 81 equal signs:\n"); //  FUNCTION CALL 
    printLine();
}

void printLine(void)
{
    int i;
    // FUNCTION DEFINATION
    for( i = 1; i <= 81; i++ )
    {
        printf("=");
    }
    printf("\n");

}