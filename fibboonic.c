#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main() {
	int i, n, t1=0, t2=1, nextterm;
	printf("enter the number of terms");
	scanf("%d", &n);
	printf("fibonacci series:\n");
	for (i=1; i<=n; i++)
	{
		printf("%d\t", t1);
		nextterm=t1+t2;
		t1=t2;
		t2=nextterm;
		
	}
	return 0;
	getch();
}
