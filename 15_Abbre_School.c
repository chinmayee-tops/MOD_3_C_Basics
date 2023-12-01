//Convert school’s name in abbreviated form.
//Shree Swami Guru : S. S. Guru

#include<stdio.h>
main()
{
	char sn1[20], sn2[20], sn3[20];
	printf("\n\n\t Input School's name : ");
	scanf("%s %s %s",sn1, sn2, sn3);
	printf("\n\n\t Abbreviated Name: ");
	
	//print the first position character for abbreviation.
  	printf("\n\n\t %c. %c. %s", sn1[0], sn2[0], sn3);
}
	
