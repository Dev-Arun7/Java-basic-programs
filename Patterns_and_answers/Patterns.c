Pattern

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i,j,s=30000;
	setbuf(stdout,NULL);
	printf("Enter the number: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=i)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}


Out

Enter the number: 
7
*             
* *           
* * *         
* * * *       
* * * * *     
* * * * * *   
* * * * * * * 


2) Left angle pattern

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i,j,s=30000;
	setbuf(stdout,NULL);
	printf("Enter the number: \n");
	scanf("%d",&n);


	for(i=1;i<=n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(j>=n+1-i)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}

OUT

Enter the number: 
7
            
           *
         * *
       * * *
     * * * *
   * * * * *
 * * * * * *

3)

 #include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i,j,s=30000;
	setbuf(stdout,NULL);
	printf("Enter the number: \n");
	scanf("%d",&n);


	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j>=i)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}


OUT

Enter the number: 
7
 
 * * * * * * *
   * * * * * *
     * * * * *
       * * * *
         * * *
           * *
             *
4)  Downward Triangle

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i,j,s=30000;
	setbuf(stdout,NULL);
	printf("Enter the number: \n");
	scanf("%d",&n);


	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=n+1-i)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}



Out

Enter the number: 
5
 * * * * *
 * * * *  
 * * *    
 * *      
 *        


5) Pyramid


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i,j,s=30000;
	setbuf(stdout,NULL);
	printf("Enter the number: \n");
	scanf("%d",&n);


	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n-1;j++)
		{
			if(j>=n+1-i && j<=n-1+i)
			{
				printf(" *");
				usleep(s);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}



OUT

Enter the number: 
5
         *        
       * * *      
     * * * * *    
   * * * * * * *  
 * * * * * * * * *

6) Pyramid


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i,j,s=3000;
	int k;
	setbuf(stdout,NULL);
	printf("Enter the number: \n");
	scanf("%d",&n);


	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n-1;j++)
		{
			k = 1;
			if(j>=n+1-i && j<=n-1+i && k)
			{
				printf(" *");
				k = 0;
				usleep(s);
			}
			else
			{
				printf("  ");
				k = 1;
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}







OUT

Enter the number: 
 
5
         *        
       * * *      
     * * * * *    
   * * * * * * *  
 * * * * * * * * *


7) Pyramid with stars on each side

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i,j,s=3000;
	setbuf(stdout,NULL);
	printf("Enter the number: \n");
	scanf("%d",&n);


	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n-1;j++)
		{
			if(j<=n+1-i || j>=n-1+i)
			{
				printf(" *");
				usleep(s);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}

OUT

Enter the number: 
5
 * * * * * * * * *
 * * * *   * * * *
 * * *       * * *
 * *           * *
 *               *





8) Number Pyramid

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n=4,i,j,s=30000;
	int k;
	setbuf(stdout,NULL);
	//printf("Enter the number: \n");
	//scanf("%d",&n);


	for(i=1;i<=n;i++)
	{
		k = 1;
		for(j=1;j<=2*n-1;j++)
		{
			if(j>=5-i && j<=3+i)
			{
				printf("%d ",k);
				j<n?k++:k--;
				usleep(s);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}



OUT

      1       
    1 2 1     
  1 2 3 2 1   
1 2 3 4 3 2 1 






