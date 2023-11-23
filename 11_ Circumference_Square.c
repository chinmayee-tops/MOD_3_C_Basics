//WAP to find circumference of square formula : C = 4 * a


#include<stdio.h>

main()
{
	int a;
	float cir=0;
	
	printf("\n\n\t Input circumference value for square : ");
	scanf("%d",&a);
	
	
	cir=4*a;
	
	printf("\n\n\t circumference of square will be calculated by Area = 4*a ");
	
	printf("\n\n\t a = %d",a);
	printf("\n\n\t 4 * a = %.2f", cir);
}
