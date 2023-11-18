/*
Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo.
*/

#include<stdio.h>

main()
{
	int n1, n2;   //Variable declaration with 'integer' data type.
	
	n1=10; //Variable initialization 
	n2=50;
	
	printf("\n\n\t Addition :  %d + %d = %d",n1, n2, n1+n2);  //'+' is arithmatic operator here.
	printf("\n\n\t............................................");
	printf("\n\n\t Subtraction :  %d + %d = %d",n1, n2, n1-n2);  //'-' is arithmatic operator here.
	printf("\n\n\t............................................");
	printf("\n\n\t Multiplication :  %d + %d = %d",n1, n2, n1*n2); //'*' is arithmatic operator here.
	printf("\n\n\t............................................");
	printf("\n\n\t Division :  %d + %d = %d",n1, n2, n1/n2);  //'/' is arithmatic operator here.
	printf("\n\n\t............................................");
	printf("\n\n\t Modulo :  %d + %d = %d",n1, n2, n1%n2);  //'%' is arithmatic operator here.
	printf("\n\n\t............................................"); 
}
