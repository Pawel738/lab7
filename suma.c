#include<stdio.h>
#include<conio.h>
int suma(int *sum, int a, int b)
{
	*sum=a+b;
}

int main()
{
	int a,b,sum;
	printf("Podaj a:");
	scanf("%d",&a);
	printf("Podaj b:");
	scanf("%d",&b);
	suma(&sum,a,b);
	printf("Suma:%d",sum);
	getche();
}

