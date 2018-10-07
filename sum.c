#include<stdio.h>
int sum(int x,int y)
{
        int s;
	s=x+y;

printf("%d",&x);
}

int main()
{

	int su,a,b;
printf("enter two numbers");
scanf("%d%d",&a,&b);

su=sum(a,b);
int *f=&a;
printf("The sum is :%d",su);

printf("\n %d \n",&a);
}	
