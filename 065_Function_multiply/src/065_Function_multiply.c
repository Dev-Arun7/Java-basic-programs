/*
 ============================================================================
 Name        : 065_Function_multiply.c
 Author      : Arun
 Version     :
 Copyright   : Arun Balakrishnan
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void mul();
int main(void)
{
	setbuf(stdout,NULL);
	mul();

	return EXIT_SUCCESS;
}
void mul()
{
	int num1,num2,result;
	printf("Enter two numbers for multiply ");
	scanf("%d%d",&num1,&num2);
	result=num1*num2;
	printf("The result is %d ",result);
}
