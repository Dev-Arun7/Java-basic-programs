/*
 ============================================================================
 Name        : 054_Pattern.c
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
	int n,i,j,s=10000;
	setbuf(stdout,NULL);
	printf("Enter the size  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
			usleep(s);
		}
		for(j=i;j<n;j++)
		{
			printf("  ");
			usleep(s);
		}
		for(j=i;j<n;j++)
		{
			printf("  ");
			usleep(s);
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
			usleep(s);
		}
		printf("\n");
		usleep(s);
	}
	for(i=1;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			printf("* ");
			usleep(s);
		}
		for(j=1;j<=i;j++)
		{
			printf("  ");
			usleep(s);
		}
		for(j=1;j<=i;j++)
		{
			printf("  ");
			usleep(s);
		}
		for(j=i;j<n;j++)
		{
			printf("* ");
			usleep(s);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
