/*
 ============================================================================
 Name        : 055_Number.c
 Author      : Arun
 Version     :
 Copyright   : Arun Balakrishnan
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i,j,p=1;
	setbuf(stdout,NULL);
	printf("Enter the size ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",p);
		}
		printf("\n");
		p++;
	}
	return EXIT_SUCCESS;
}
