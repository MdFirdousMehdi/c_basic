#include<stdio.h>
int main()
{
	int num,i=1;
	printf(" Enter the number:\n");
	scanf("%d",&num);
	printf("%d",num);
	printf("\n Multiplication table\n");
	start:
	{
		if (i<=10)
		{
			printf("%d * %d= %d\n",i,num,i*num);
			i++;
			goto start;
		}
	}
   return 0;

}
			
