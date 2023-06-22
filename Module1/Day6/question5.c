/*5. Write a function to perform a search operation on the array of structures based on name of the student*/

#include <stdio.h>
#include <string.h>
struct Student {
    int rollno;
    char name[20];
    float marks;
};
void searchByName(const struct Student *students, int size, const char *name) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student Found:\n");
            printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
            found = 1;
        }
    }
    if (!found) {
        printf("Student with name '%s' not found.\n", name);
    }
}
int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    struct Student *students = (struct Student *)malloc(size * sizeof(struct Student));
    for (int i = 0; i < size; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    char searchName[20];
    printf("\nEnter the name to search for: ");
    scanf("%s", searchName);
    searchByName(students, size, searchName);
    free(students);
    return 0;
}