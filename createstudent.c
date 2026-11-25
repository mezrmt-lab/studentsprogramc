#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct Student
{
    char name[50];
    int age;
    float average;
    struct Student *Next;
} Student;

Student *createStudent(char _name[], int _age, float _average)
{
    Student *new = (Student *)malloc(sizeof(Student));
    strcpy(new->name, _name);
    new->age = _age;
    new->average = _average;
    new->Next = NULL;
    return new;
}

void showlist(Student *head)
{
    Student *current = head;
    while (current != NULL)
    {
        printf("Name: %s, Age: %d, Average: %.1f\n", current->name, current->age, current->average);
        current = current->Next;
    }
}

