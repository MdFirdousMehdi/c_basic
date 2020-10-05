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
			
/* OUTPUT:

Enter the number:
1                                                           1                                                            Multiplication table                                       1 * 1= 1                                                    2 * 1= 2                                                    3 * 1= 3                                                    4 * 1= 4                                                    5 * 1= 5                                                    6 * 1= 6                                                    7 * 1= 7                                                    8 * 1= 8
9 * 1= 9
10 * 1= 10

*/