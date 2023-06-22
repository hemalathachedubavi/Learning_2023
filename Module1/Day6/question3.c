/*3. Write a function to display all members in the above array of structures*/

#include <stdio.h>
struct Student {
    int rollno;
    char name[20];
    float marks;
};
void displayStudents(const struct Student *students, int size) {
    printf("Roll No\tName\tMarks\n");
    printf("----------------------------\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t%s\t%.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
}
int main() {
    struct Student students[] = {
        {1001, "Aron", 100.00},
        {1002, "John", 95.50},
        {1003, "Emma", 98.75}
    };
    int size = sizeof(students) / sizeof(students[0]);
    displayStudents(students, size);
    return 0;
}