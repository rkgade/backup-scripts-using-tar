#include<stdio.h>
int sum(int * x,int * y)
{
        int s;
	s=*x+*y;
   	printf("\n Address of x is : %p", x);
  	printf("\n Address of y is : %p", y);
        return s;
}

int main()
{

	int su,a,b;
        int * pointer_a;
   	int * pointer_b;
	pointer_a = &a;
	pointer_b = &b;
  	
	

printf("enter two numbers \n ");
scanf("%d %d",&a,&b);


   	printf("\n Address of a is : %p", &a);
  	printf("\n Address of b is : %p", &b);

su=sum(pointer_a,pointer_b);
printf("\n The sum is :%d \n \n ",su);

}	
