/*4. Write a simple calculator program which should accept inputs in the same order.
    - Operand 1
    - Operator
    - Operand 2
The order of scan should be same, for example, you should first scan in the following order.
printf("Enter Number1: );
Scan the first number form the user.
printf("Enter the operator: );
Scan the operator from the user.
printf("Enter Number2: );
Scan the second number form the user.*/


#include<stdio.h>
int main()
{
    int operand1,operand2;
    char operator;
    printf("enter any one of the operator:+,-,*,/\t");
    scanf("%s",&operator);
    printf("enter the first operand1\t");
    scanf("%d",&operand1);
    printf("enter the second operand2\t");
    scanf("%d",&operand2);
    switch(operator)
    {
    case '+' :
         printf("the output is %d+%d= %d",operand1,operand2,operand1+operand2);
         break;
         
    case '-':
    
         printf("the output is %d-%d=%d",operand1,operand2,operand1-operand2);
         break;
    
    case '*':

         printf("the output is %d*%d=%d",operand1,operand2,operand1*operand2);
         break;
    
    case '/':
    
         printf("the output is %d/%d=%d",operand1,operand2,operand1/operand2);
         break;
    default:
         printf("enter the valid operator");
    }
    return 0;
}

    