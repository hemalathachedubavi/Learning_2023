/*1. Assume User will be providing input in the form of a string as show below. 
Write a function to parse the string and initialize an array of structures. 

Example String : "1001 Aron 100.00" 
Example Structure : 
    struct Student{
        int rollno;
        char name[20];
        float marks;
    };

Note: User must be able define the no. of inputs/size of the array during runtime.*/

//Intialization of array of structures

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    int rollno;
    char name[20];
    float marks;
};
void parseString(const char *input, struct Student *students, int size) {
    char *token;
    char *copy = strdup(input); 
    int count = 0;
    token = strtok(copy, " ");
    while (token != NULL) {
        switch (count) {
            case 0:
                students[size].rollno = atoi(token);
                break;
            case 1:
                strcpy(students[size].name, token);
                break;
            case 2:
                students[size].marks = atof(token);
                break;
        }
        token = strtok(NULL, " ");
        count++;
    }
    free(copy); 
}
int main() {
    int size;
    printf("Enter the number of inputs: ");
    scanf("%d", &size);
    struct Student *students = (struct Student *)malloc(size * sizeof(struct Student));
    for (int i = 0; i < size; i++) {
        char input[100];
        printf("Enter input %d: ", i + 1);
        scanf(" %[^\n]s", input);
        parseString(input, students, i);
    }
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
    free(students);  
    return 0;
}