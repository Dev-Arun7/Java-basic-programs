/*
 ============================================================================
 Name        : 062_Diamond.c
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
	int n,i,j,p,s=20000;
	setbuf(stdout,NULL);
	printf("Enter the size  ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("  ");
			usleep(s);
		}
		p=1;
		for(j=1;j<i;j++)
		{
			printf(" %d",p);
			usleep(s);
			p++;
		}
		for(j=1;j<=i;j++)
		{
			printf(" %d",p);
			usleep(s);
			p--;
		}
		printf("\n");
		usleep(s);
	}
	for(i=1;i<=n;i++)
	{
		p=1;
		for(j=1;j<=i;j++)
		{
			printf("  ");
		}
		for(j=i;j<n;j++)
		{
			printf(" %d",p);
			usleep(s);
			p++;
		}
		for(j=i;j<=n;j++)
		{
			printf(" %d",p);
			usleep(s);
			p--;
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
