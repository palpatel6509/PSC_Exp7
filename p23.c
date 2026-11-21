#include<stdio.h>

float totalAmount(float p , float r , int n); // FUNCTION DECLARATION

int main()
{
    // FUNCTION CALL
    float p,r,finalResult;
    int n;

    printf("Enter Principle Amount:\n");
    scanf("%f",&p);

    printf("Enter Rate of Interest (r in decimal form , e.g., 0.05 for 5%% ) :\n");
    scanf("%f",&r);

    printf("Enter Number of Years:\n");
    scanf("%d",&n);

    // CALL PROGRAM 3 FUNCTION
    finalResult = totalAmount(p,r,n);
    printf("Total Amount after %d periods is %.2f( Printed from Main )\n",n,finalResult);

    return 0;
}

float totalAmount(float p , float r , int n ) // FUNCTION DEFINATION FOR PROGRAM 3
{
    float totalAmount = p;
    int i;

    for( i = 1; i <= n; i++ )
    {
        totalAmount *= (1+r);
    }

    // PROGRAM 2 PRINTS DIRECTLY
    printf("Total Amount after %d periods is %.2f( Printed from Function )\n ",n,totalAmount);

    // PROGRAM 3 RETURN VALUE TO MAIN
    return totalAmount;
    
}