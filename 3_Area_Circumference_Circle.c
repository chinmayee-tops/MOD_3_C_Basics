//WAP to Find Area And Circumference of Circle.


//Area of Circle  : Pi*R*R

//Area of Circumference : 2*Pi*R

#include<stdio.h>
main()
{
	float Pi=3.14; //Pi is initialized with float values because its is constant values.
	float area, cir;
	
	int r;
	
	printf("\n\n\t Input the value for radious : ");
	scanf("%d",&r);
	
	area=Pi*r*r;  //Area of circle formula
	printf("\n\n\t Area of Circle : %f",area);
	
	cir=2*Pi*r; //Circumference of circle formula.
	printf("\n\n\t Area of Circumference : %f",cir);
}
