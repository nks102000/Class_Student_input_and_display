#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks[5];
};

int main(){
    struct student S;
    printf("\nEnter the details of student");
    printf("\nEnter name : ");
    scanf("%s",S.name);
    printf("\nEnter Roll Number : ");
    scanf("%d",&S.roll);
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter marks : ");
        scanf("%f",&S.marks[i]);
    }

    printf("\nDisplaying information");
    printf("\nName:%s",S.name);
    printf("\n Roll: %d",S.roll);
    for (int i = 0; i < 5; i++)
    {
        printf("\nMarks of subject %d: %0.2f ",i+1,S.marks[i]);
    }
}

