#include<stdio.h>
int main()
{ 
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	printf("%d", num);
	while(num>0)
	{
		if(num%2==0)
		{
			printf("\tnumber is even");
			break;
		}
		else
		{
			printf("\tnumber is odd");
			break;
		}

	}
	return 0;
}

