/*5. Write a function to accept an integer (32 bits) and operation type to do the following and return the result to main function.
    - Set 1st bit, if operation type is 1
    - Clear 31st bit, if operation type is 2
    - Toggle 16th bit, if operation type is 3
   You can consider the below function prototype,
    - bit_operations(int num, int oper_type);*/



#include<stdio.h>
#include<stdint.h>
int bit_operations(int num,int oper_type)
{
    switch(oper_type)
    {
        case 1:
        num |=1<<0;
        return num;
        break;

        case 2:
        num&= ~(1<<30);
        return num;
        break;

        case 3:
        num^=1<<15;
        return num;
        break;
        
    }
}
int main()
{
    uint32_t number=0xc0000000;
    int operationtype,u;
    printf("enter the operation type");
    scanf("%d",&operationtype);
    u= bit_operations(number, operationtype);
    printf("the answer is %x",u);
    return 0;
}