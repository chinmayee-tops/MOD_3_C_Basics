//WAP to find area of cube.

//area of Cube :  a = 6a2

#include<stdio.h>

main()
{
	int a, Area;
	
	printf("\n\n\t Input Area Side for Cube : ");
	scanf("%d",&a);
	
	Area=6*a*2;
	
	printf("\n\n\t Area of Cube will be calculated by Area = 6*a*2 ");
	
	printf("\n\n\t 6 * %d * 2 = %d",a, Area);
}
