#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50][50],b[50][50],r[50][50],i,j,k,n,m,op;
	printf("enter the number of rows the matrix can have\t");
	scanf("%d",&n);
	printf("enter the number of columns the matrix can have\t");
	scanf("%d",&m);
	printf("enter the first matrix values row wise");
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
		scanf("%d",&a[i][j]);
	    }
	} 
		printf("enter the second matrix values row wise");
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
		scanf("%d",&b[i][j]);
	    }
	}
	printf ("enter the operation you want to perform\n");
	printf("1.addition\t2.subtraction\t3.transpose\t4.multiplication");
	scanf("%d",&op);
	switch(op)
	{
	case 1:
	{
		printf("the sum of the two matrices is\n");
		for (i=0;i<n;i++)
	  {
		for (j=0;j<m;j++)
		{
		printf("%d\t",a[i][j]+b[i][j]);
	    }
	    printf("\n");
	  }
	  break;
    }
    case 2:
    	{
    		printf("the difference of the two matrices is\n");
			for (i=0;i<n;i++)
    		{
    			for (j=0;j<m;j++)
    			{
    				printf("%d\t",a[i][j]-b[i][j]);
    			}
    			printf("\n");
    		}
    		break;
    	}
    case 3:
    	{
    		printf("transpose of the first matrix is\n");
			for(i=0;i<n;i++)
    		{
    			for (j=0;j<m;j++)
    			{
    				printf("%d\t",a[j][i]);
    			}
    			printf("\n");
    		}
    		printf("transpose of the second matrix is\n");
    		for(i=0;i<n;i++)
    		{
    			for(j=0;j<m;j++)
    			{
    				printf("%d\t",b[j][i]);
    			}
    			printf("\n");
    		}
    	}
    case 4:
    	{
    		printf("the product of the two matrices is\n");
    		for(i=0;i<n;i++)
    		{
    			for(j=0;j<m;j++)
    			{
    				for(k=0;k<n;k++)
    				{
    				 r[i][j]+=a[i][k]*b[k][j];	
    				}
    				printf("%d\t",r[i][j]);
    			}
    			printf("\n");
    		}
    		break;
    	}
    default:
    	printf("invalid option");
    	
    }
	getch();
}
