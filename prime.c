#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main() {
	int a, c,i;
	printf("Enter a number");
	scanf("%d", &a);
	for (i=1; i<=a; i++)
	{
		if (a%i ==0)
		 c++;
	}
	if (c==2)
	printf("the number is a prime number");
	else if (c==1)
	printf("the number is neither prime number nor composite");
	else
	printf("the number is a composite number");

	getch ();
	return 0;
	
}
