//WAP to find area of triangle.

//area of triangle :  A = 1/2 × b × h

#include<stdio.h>

main()
{
	int b, h;
	float Area=0;
	
	printf("\n\n\t Input base value for Triangle : ");
	scanf("%d",&b);
	
	printf("\n\n\t Input height value for Triangle : ");
	scanf("%d",&h);
	
	Area=0.5*(b*h);
	
	printf("\n\n\t Area of Triangle will be calculated by Area = 1/2*b*h ");
	
	printf("\n\n\t 1/2 * %d * %d = %f",b, h,Area);
}
