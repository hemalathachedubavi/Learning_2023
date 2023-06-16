/*3. Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.*/



#include<stdio.h>
int total(int x,int y,int z)
{
return x+y+z;
}
double percentage(int w)
{
    return(w*100/300);
}
int main()
{
    int rollnumber,t;
    char name[100];
    int marksofphy,marksofmaths,marksofchem;
    printf("enter the roll number\n");
    scanf("%d",&rollnumber);
    printf("enter the name\n");
    scanf("%s",name);
    printf("enter the marksofphy,marksofmaths,marksofchem\n");
    scanf("%d%d%d",&marksofphy,&marksofmaths,&marksofchem);
    printf("the name of the student is %s,and his roll number is %d. he secured %d in phy ,%d in maths, %d in chem",name ,rollnumber,marksofphy,marksofmaths,marksofchem);
    printf("the total score is %d",total(marksofphy,marksofmaths,marksofchem));
    printf("the total percentage is %f",percentage(total(marksofphy,marksofmaths,marksofchem)));
    return 0;
    
}