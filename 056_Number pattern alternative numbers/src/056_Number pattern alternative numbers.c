/*
 ============================================================================
 Name        : 056_Number.c
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
	int n,i,j,s=50000,p=1;
	setbuf(stdout,NULL);
	printf("Enter the size  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
			{
				printf(" %d",p);
				usleep(s);
			}
			else
			{
				printf(" %d",p+1);
				usleep(s);
			}

		}
		printf("\n");
		usleep(s);
	}
	return EXIT_SUCCESS;
}
