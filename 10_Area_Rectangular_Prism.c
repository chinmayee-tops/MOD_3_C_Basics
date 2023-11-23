//WAP to find  area of a rectangular prism formula : A=2(wl+hl+hw)


#include<stdio.h>

main()
{
	int area, l, w, h;

	
	printf("\n\n\t Input Length size for rectangular prism  : ");
	scanf("%d",&l);
	printf("\n\n\t Input width size for rectangular prism  : ");
	scanf("%d",&w);
	printf("\n\n\t Input height size for rectangular prism  : ");
	scanf("%d",&h);
	
	area=2 * ( (w*l) + (h*l) + (h*w) );
	
	printf("\n\n\t area of a rectangular prism will be calculated by A = 2(wl+hl+hw) ");
	
	printf("\n\n\t l = %d,  w = %d, h = %d",l,w,h);
	printf("\n\n\t Cir = 2(wl+hl+hw) ");
	
	printf(" 2 * (%d*%d) + (%d*%d) + (%d*%d) = %d" , w,l,h,l,h,w,area);
	
}
