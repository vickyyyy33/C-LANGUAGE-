//Add array elements

#include<stdio.h>
#include<conio.h>

void main()
{
  int arr[10];
 int sum=0,i;
printf("Enter the array elements\n");
for(i=0;i<=9;i++)
{
scanf("%d\n",&arr[i]);
sum=sum+arr[i];
}
printf("the sum of array elements is:%d",sum);
getch();
}
