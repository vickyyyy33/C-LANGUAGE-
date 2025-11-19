#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Student_record {
    char Studentname[20];
    int Studentid;
    int Studentcontact;
    float Structuremarks;
} J;

int main() {
    printf("Enter the Student record (Name ID Contact Marks):\n");

    // Correct use of scanf: use & for int and float
    scanf("%s %d %d %f", J.Studentname, &J.Studentid, &J.Studentcontact, &J.Structuremarks);

    printf("Name = %s\n id =%d\n contact =%d\n marks =%f\n",J.Studentname,J.Studentid,J.Studentcontact,J.Structuremarks);
}
 

