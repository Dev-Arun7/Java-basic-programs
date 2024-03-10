/*
 ============================================================================
 Name        : 063_Butterfly.c
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
	int n,i,j,s=10000,p;
	setbuf(stdout,NULL);
	printf("Enter the size  ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		p=1;
		for(j=1;j<i;j++)
		{
			printf(" %d",p);
			p++;
			usleep(s);
		}
		for(j=i;j<n;j++)
		{
			printf("  ");
		}
		for(j=i;j<n;j++)
		{
			printf("  ");
		}
		p--;
		for(j=1;j<i;j++)
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
				for(j=i;j<n;j++)
				{
					printf(" %d",p);
					p++;
					usleep(s);
				}
				for(j=1;j<i;j++)
				{
					printf("  ");
				}
				for(j=1;j<i;j++)
				{
					printf("  ");
				}
				p--;
				for(j=i;j<n;j++)
				{
					printf(" %d",p);
					p--;
					usleep(s);
				}

				printf("\n");
			}
	return EXIT_SUCCESS;
}
