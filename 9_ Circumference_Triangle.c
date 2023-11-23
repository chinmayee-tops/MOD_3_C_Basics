//WAP to find circumference of triangle.

//circumference of triangle =  a + b + c

#include<stdio.h>

main()
{
	int cir, a, b, c;

	
	printf("\n\n\t Input side1  : ");
	scanf("%d",&a);
	printf("\n\n\t Input side2  : ");
	scanf("%d",&b);
	printf("\n\n\t Input side3  : ");
	scanf("%d",&c);
	
	cir=a+b+c;
	
	printf("\n\n\t circumference of triangle will be calculated by a+b+c ");
	
	printf("\n\n\t a = %d,  b = %d, c = %d",a,b,c);
	printf("\n\n\t %d = a + b + c ", cir);
}
