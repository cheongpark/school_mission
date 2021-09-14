#include <stdio.h>

int adda(int a);

int main()
{
	int a;
	scanf("%d",&a);
	for(int i=a;i>0;i--)
	{
		printf("%d! = ",i);
		for(int j=i;j>0;j--)
		{
			printf("%d ",j);
			if(j == 1)
				break;
			printf("* ");
		}
		printf(" = %d",adda(i));
		printf("\n");
	}
}

int adda(int a)
{
	int num = 1;
	for(int i=a;i>0;i--)
		num*=i;
	return num;
}
