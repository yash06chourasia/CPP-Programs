/*print fibonacci series*/
#include<stdio.h>
int main()
{
	int n;
	printf("enter numbers of terms : ");
	scanf("%d",&n);
	int a=0;
	int b=1;
	int c;
	printf("\nFIBONACCI SERIES :");
	for(int i=1;i<=n;i++)
	{printf("\t%d",a);
	c=a+b;
	a=b;
	b=c;
	}
}
