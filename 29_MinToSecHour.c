//Convert minutes into seconds and hours.

#include<stdio.h>

main()
{
	int n=60; 
	long long int hours, seconds; 
  
    seconds=n*3600;
	hours=n/60; 
  
    printf("\n\n\t Seconds = %d",seconds);
    printf("\n\n\t Hours = %d",hours);
}
