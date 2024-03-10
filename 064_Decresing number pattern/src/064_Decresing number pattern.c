/*
 ============================================================================
 Name        : 064_Decresing.c
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
	int n,i,j,s=1000,p,k=0;
	setbuf(stdout,NULL);
	printf("Enter the size  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=n;
		p=p-k;
		for(j=1;j<=i;j++)
		{
			printf("  ");
		}
		for(j=i;j<=n;j++)
		{
			printf(" %d",p);
			usleep(s);
			p--;
		}
		printf("\n");
		k++;
	}
	return EXIT_SUCCESS;
}
