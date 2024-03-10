/*
 ============================================================================
 Name        : 057_Number.c
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
	int n,i,j,s=20000,p=1;
	setbuf(stdout,NULL);
	printf("Enter the size ");
	scanf("%d",&n);


	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("  ");
			usleep(s);
		}
		for(j=1;j<i;j++)
		{
			printf(" %d",p);
			usleep(s);
		}
		for(j=1;j<=i;j++)
		{
			printf(" %d",p);
			usleep(s);
		}
		printf("\n");
		p++;
	}

	for(i=1;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("  ");
			usleep(s);
		}
		for(j=i;j<n-1;j++)
		{
			printf(" %d",p);
			usleep(s);
		}
		for(j=i;j<n;j++)
		{
			printf(" %d",p);
			usleep(s);
		}
		printf("\n");
		p++;
		usleep(s);
	}
	return EXIT_SUCCESS;
}
