#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Student_Record
{
	char stuname[20];
	int stuid;
	char studept[20];
	float stumarks;
	
}
main()
{
	struct Student_Record P[50];
	int i,j;
	printf("Enter the students record\n (name id dept marks(s1,s2,s3))");
	for(i=0;i<=49 ;i++)
	{
		scanf("%s %d %s",&P[i].stuname,&P[i].stuid,&P[i].studept);
		
		for(j=0;j<=2;j++)
		{
			scanf("%f",&P[i].stumarks);
		}
		
	}
	printf("the student records are:");
	for(i=0;i<=49;i++)
	{
		printf("name=%s\n id=%d\n dept=%s\n",P[i].stuname,P[i].stuid,P[i].studept);
		
		for(j=0;j<=2;j++)
		{
			printf("marks=%f\n",P[i].stumarks);
		}
	}
}
