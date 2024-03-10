/*
 ============================================================================
 Name        : 061_Left.c
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
	int n,i,j,s=2000,p;
	setbuf(stdout,NULL);
	printf("Enter the size  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=n;
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
		usleep(s);
	}
	return EXIT_SUCCESS;
}
