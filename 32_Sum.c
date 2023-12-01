//Accept 2 numbers and find out its sum 

#include<stdio.h>

main()
{
	int number1, number2, sum;
    
    printf("\n\n\t Input two integers : ");
    scanf("%d %d",&number1,&number2);
    sum = number1 + number2;      
    printf("%d + %d = %d", number1, number2, sum);
}

