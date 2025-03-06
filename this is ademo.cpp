#include<stdio.h>
int sagar(char);
int main()
{
	int x=0;
	char op;
	printf("Hello Everyone!!");
	printf("+ 	-	/	%");
	printf("\nEnter the operators you want to perform:");
	scanf("%c",&op);
	x=sagar(op);
	printf("%d is the result.",x);
	return 0;
}
int sagar(char po)
{
	int a=0,b=0,c=0;
	switch(po)
	{
		case '+':
			printf("Enter any two numbers:");
			scanf("%d %d",&a,&b);
			c=a+b;
			return c;
			break;
		case '-':
			printf("Enter any two numbers:");
			scanf("%d %d",&a,&b);
			c=a-b;
			return c;
			break;
		case '/':
			printf("Enter any two numbers:");
			scanf("%d %d",&a,&b);
			c=a/b;
			return c;
			break;
		case '%':
			printf("Enter any two numbers:");
			scanf("%d %d",&a,&b);
			c=a%b;
			return c;
			break;
		default:
		printf("Sorry something went wrong.");
	}
	
}
