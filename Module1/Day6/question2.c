/*2. Write a function to initialize all members in the above array of structures
Example String : "1001 Aron 100.00" 
Example Structure : 
    struct Student{
        int rollno;
        char name[20];
        float marks;
    };*/
    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    int rollno;
    char name[20];
    float marks;
};
void initializeArray(struct Student *students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter roll no for student %d: ", i + 1);
        scanf("%d", &(students[i].rollno));
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &(students[i].marks));
    }
}
int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    struct Student *students = (struct Student *)malloc(size * sizeof(struct Student));
    initializeArray(students, size);
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
    free(students); 
    return 0;
}