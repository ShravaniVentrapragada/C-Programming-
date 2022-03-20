#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	printf("enter no. of rows");
	scanf("%d",&n);
	if(n<100)
	{
	for(i=n;i>=1;i--)
	{
    for(j=1;j<i;j++)
	{
	printf(" ");
	}
	for(k=5;k>=i;k--)
    {	
	printf("*");
	}	
printf("\n");
	}
}
if(n<0)
{
	printf("no. is negative");
}
return 0; 
}
