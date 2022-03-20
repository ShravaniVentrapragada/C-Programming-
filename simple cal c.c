#include <stdio.h>
#include <stdlib.h>
main() {
	int a, b, c, sum, subtract, multiply, divide;
		printf("enter two numbers to be operated",a,b);
	scanf("%d%d",&a,&b);
	printf("enter a choice:\n 1.add\n 2.subtract\n 3.multiply\n 4.divide\n");
	printf("enter your choice", c);
	scanf("%d", &c);
	switch(c)
	{
	case 1:
	sum=0;
	sum=a+b;
	printf("sum is equal to %d", sum);
	break;
	case 2: 
	subtract=0;
	subtract=a-b;
	printf("subtraction is equal to %d", subtract);
	break;
	case 3:
	multiply=0;
	multiply=a*b;
	printf("multiplication is equal to %d", multiply);
	break;
	case 4:
	divide=0;
	divide=a/b;
	printf("division is equal to %d", divide);
	break;
	default:
		printf("wrong chioce");
}
system("pause");
	return 0;
}
