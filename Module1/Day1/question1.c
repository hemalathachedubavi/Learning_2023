/*1. Write a function to find biggest of 2 numbers using 
    - if else
    - ternary operator

a) Using - if else :*/


#include<stdio.h>
int main()
{
int a,b;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
    if(a>b)
    {
    printf("a is greater than b");
    }
    else if(b>a)
    {
    printf("b is greater than a");
    }
    else
    {
        printf("a and b are equal");
    }
    return 0;
}

/*b) Using - ternary operator :


#include<stdio.h>
int main()
{
    int a ,b,c;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    c=(a>b)?a:b;
    printf("biggest of a and b:%d",c);
    return 0;
}*/


