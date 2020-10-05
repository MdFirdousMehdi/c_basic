
#include<stdio.h>
int main()
{
	int num,sum,d,i;
	printf("\nThe amstrong numbers are:\n");
	for( i=1;i<=500;i++)
	{
		sum=0;
		num=i;
		while(num!=0)
		{
			d=num%10;
                        num=num/10;
			sum+=d*d*d;
			
		}
		if(sum==i)
			printf("%d \t",i);
	}
    return 0;

}


/*OUTPUT:
The amstrong numbers are:                                   1       153     370     371     407    */                     
