// use structure to define a student profile with name and age
// and create 2 students with pointer

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct student
{
    char name[20];
    int age;
};

int main()
{
    int student_count = 0;
    struct student *student_ptr;

    printf("Enter number of students: ");
    scanf("%d", &student_count);

    student_ptr = (struct student *)malloc(student_count * sizeof(struct student *));

    for (int i = 0; i < student_count; i++)
    {
        printf("Enter student #%d name: ", i + 1);
        scanf("%s", (student_ptr + i)->name);
        printf("Enter student #%d age: ", i + 1);
        scanf("%d", &(student_ptr + i)->age);
    }

    for (int i = 0; i < student_count; i++)
    {
        printf("Student #%d name is %s and age is %d\n", i + 1, (student_ptr + i)->name, (student_ptr + i)->age);
    }

    printf("\n\n#############################################\n");
    malloc_stats();

}