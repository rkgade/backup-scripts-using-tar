#include<stdio.h>

int sum_by_reference_function(int * x,int * y) 	/* you are not passing values, but passing address which contain the values you need */
{
   	printf("\n Value of a is : %d", *x);
  	printf("\n Value of b is : %d", *y);

        int s;
        *x = *x + 10;
	s=*x+*y;		/*  Star x ( *x ) means, because x stores address, give me the value that is stored in the address */
   	printf("\n Address of x is : %p", x);
  	printf("\n Address of y is : %p", y);
        return s;
}

int sum_by_value_function( int e, int f)
{

   	printf("\n Value of a is : %d", e);
  	printf("\n Value of b is : %d", f);

	int s;
	e = e + 10;
	s = e + f;

	return s;
}



int main()
{

	int sum_by_reference,sum_by_value,a,b;
	/* the following creates a pointer. A pointer stores address. This means, pointer_a variable stores address, not values. */
        int * pointer_a;
   	int * pointer_b;
	pointer_a = &a; 	/* stores the address of variable a */
	pointer_b = &b;		/* same for b */
  	
	

printf("enter two numbers \n ");
scanf("%d %d",&a,&b);


   	printf("\n Address of a is : %p", &a);
  	printf("\n Address of b is : %p", &b);

sum_by_reference=sum_by_reference_function(pointer_a,pointer_b);
sum_by_value=sum_by_value_function(a,b);

printf("\n The sum by reference is :%d \n \n ",sum_by_reference);
printf("\n The sum by value is :%d \n \n ",sum_by_value);

printf("\n The value of a is : %d \n ", a);


}	
