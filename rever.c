#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main() {
	int n, reversenumber =0, remainder;
	printf ("enter an integer");
	scanf ("%d", &n);
	
	while (n !=0)
	{
		remainder= n%10;
		reversenumber=reversenumber*10+remainder;
		n/=10;
	}
	printf("reversed number=%d", reversenumber);
	return 0;
	getch();
}
