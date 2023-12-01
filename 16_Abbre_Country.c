//Convert country’s name in abbreviate form
//e.g West Indies : W I

#include<stdio.h>
main()
{
	char cname1[20], cname2[20];
	printf("\n\n\t Input country's name : ");
	scanf("%s %s",cname1, cname2);
	printf("\n\n\t Abbreviated Name: ");
	
	//print the first position character for abbreviation.
  	printf("\n\n\t %c %c", cname1[0], cname2[0]);
}
	
