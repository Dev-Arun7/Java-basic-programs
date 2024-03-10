/*
 ============================================================================
 Name        : 066_Function.c
 Author      : Arun
 Version     :
 Copyright   : Arun Balakrishnan
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum(int,int);
int main(void)
{
	int num1,num2,result;
	setbuf(stdout,NULL);
	printf("Enter two numbers");
	scanf("%d%d",&num1,&num2);
	result=sum(num1,num2);
	printf("The sum is %d",result);
	return EXIT_SUCCESS;
}
int sum(int a,int b)
{
	int sum;
	sum=a+b;
	return sum;
}
