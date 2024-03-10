/*
 ============================================================================
 Name        : 052_Pattern.c
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
	int n,i,j;
	setbuf(stdout,NULL);
	printf("Enter the size ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("  ");
			usleep(50000);
		}
		for(j=i;j<=n;j++)
		{
			printf(" *");
			usleep(50000);
		}
		for(j=i;j<n;j++)
		{
			printf(" *");
			usleep(50000);
		}

		printf("\n");
		usleep(50000);
	}
	return EXIT_SUCCESS;
}
