#include <stdio.h>
#include <string.h>

struct Student_record
{
    float marks[3];     
    char name[20];
    char dept[20];
    int id;
    float total;
    float percentage;
};

int main()
{
    struct Student_record P[50];
    int i, j;

    printf("Enter the Students Record (name id dept marks1 marks2 marks3)\n");

    for (i = 0; i < 50; i++)
    {
        scanf("%s %d %s", P[i].name, &P[i].id, P[i].dept);

        P[i].total = 0;   

        for (j = 0; j < 3; j++)
        {
            scanf("%f", &P[i].marks[j ]);   
            P[i].total += P[i].marks[j];   
        }

        P[i].percentage = (P[i].total / 300) * 100; 
    }

    printf("\nThe students with percentage >= 80 are:\n");

    for (i = 0; i < 50; i++)
    {
        if (P[i].percentage >= 80)
        {
            printf("\nName = %s\nID = %d\nDept = %s\nTotal Marks = %.2f\nPercentage = %.2f%%\n",
                   P[i].name, P[i].id, P[i].dept, P[i].total, P[i].percentage);
        }
    }

    return 0;
}

