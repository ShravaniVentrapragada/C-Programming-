#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main() {
	int a;
	printf(" enter an year");
	scanf("%d", &a);
	if (a%400==0)
	{
		printf("It is a leap year");
	}
	else if (a%100==0)
	{
		printf("It is not a leap year");
	}
	else if (a%4==0)
{
	printf("It is a leap year");
}
else
{
	printf("it is not a leap year");
}
	return 0;
	getch();
}
