#include <stdio.h>

struct Student {
    char name[50];
    int roll_number;
    int marks;
};

void display(struct Student students[], int size) {
    printf("Students with marks greater than 500:\n");
    for (int i = 0; i < size; i++) {
        if (students[i].marks > 500) {
            printf("Name: %s, Roll Number: %d, Marks: %d
