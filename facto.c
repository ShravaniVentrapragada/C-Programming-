#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
main() {
	int n, i, fact;
	printf("enter a number");
	scanf("%d", &n);
	if (n<0)
	{
	printf("error! Factorial does not exist for negative number");
}
else
{
	for (i=1; i<=n; i++)
	{
		fact= fact*i;
	}
	printf("%d", fact);
}

	return 0;
	getch();
}
