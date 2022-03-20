#include <stdio.h>
#include <stdlib.h>
void  main() {
int data [100], n,m,i, flag=0;
printf("enter the number of elements in array");
scanf("%d", &n);
printf ("");
for (i=0; i<n; i++)
{
	printf("enter number");
	scanf("%d", &data[i]);
}
printf("enter the number to be searched");
scanf("%d", &m);
for (i=0; i<n; i++)
{
	if(data[i]==m)
	{
		flag=1;
		printf("the number is present at the postion %d", i);
		break;
	}
}
	if(flag!=1)
	{
		("the number is not found");
	}
	getch();
}
