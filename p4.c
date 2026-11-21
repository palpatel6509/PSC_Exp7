#include<stdio.h>

// FUNCTION DECLARATION
float add(float a, float b);
float subtract(float a, float b);
float mul(float a, float b);
float div(float a, float b);

int main()
{
    float num1,num2,result;
    int choice;

    /* READ NUMBERS FROM USER */
    printf("Enter two Numbers:\n");
    scanf("%f %f",&num1,&num2);
        
    printf("--- Simple Calculator ---\n");

    // SELECT OPTION BY USER  
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Choose an Option from 1 to 4:\n");
    scanf("%d",&choice);

    // CALL FUNCTION BASED ON CHOICE 
    switch ( choice )
    {
        case 1:
            result = add ( num1, num2);
            printf("Result : %.2f\n",result);
            break;

        case 2:
            result = subtract ( num1, num2);
            printf("Result : %.2f\n",result);
            break;
            
         case 3:
            result = mul ( num1, num2);
            printf("Result : %.2f\n",result);
            break;

         case 4:
            if ( num2 != 0 );
            {
                result = div ( num1, num2);
                printf("Result : %.2f\n",result);
            }
            break;

        defalut:
        {
            printf("INVALID CHOICE!!");
        }
    }

    return 0;
}
    
/* FUNCTION DEFINATION */
float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float mul(float a, float b)
{
    return a * b;
}

float div(float a, float b)
{
    if ( b != 0 )
    {
        return a / b;
    }
    else
    {
        printf("ERROR: Can not divide by ZERO:\n");
    }
}