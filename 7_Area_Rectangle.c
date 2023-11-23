//WAP to find area of rectangle.

//area of rectangle :   A=wl

#include<stdio.h>

main()
{
	int w, l;
	float Area=0;
	
	printf("\n\n\t Input Length for rectangle : ");
	scanf("%d",&l);
	
	printf("\n\n\t Input width for rectangle : ");
	scanf("%d",&w);
	
	Area=l*w;
	
	printf("\n\n\t Area of rectangle will be calculated by Area = w*l ");
	
	printf("\n\n\t %d * %d = %.2f",l, w,Area);
}
