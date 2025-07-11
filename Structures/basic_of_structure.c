#include <stdio.h>
#include <string.h>
int main()
{
    struct student_info
    {
        char name[20];
        char grade;
        int age;
        float gpa;
    };
    struct student_info info;
    printf("Enter your name: ");
    scanf("%19s", info.name);

    printf("Enter your grade: ");
    scanf(" %c", &info.grade);

    printf("Enter your age: ");
    scanf("%d", &info.age);

    printf("Enter your GPA: ");
    scanf("%f", &info.gpa);

    printf("Student Info: \n");
    printf("The name of student is %s.\n", info.name);
    printf("The grade of %s is %c.\n", info.name, info.grade);
    printf("The age of %s is %d.\n", info.name, info.age);
    printf("The gpa of %s is %.2f.\n", info.name, info.gpa);
    return 0;
}