Enter 3
* * 
* 
* 
* 
* * * * 
* * * * 
* 
* 
* 
* * * * * * 
* * * * * * 
* * * * * * 


#include <stdio.h>

int main() {
 int n,i,j,k;
 printf("emter");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     for(j=1;j<=(i*i)*2;j++)
     {
         printf("* ");
         if(j%(i*2)==0)
         printf("\n");
         
     }
     if(i==n)
     break;
     for(k=1;k<=3;k++)
     {
         printf("* \n");
     }
 }
    
    return 0;
}




enter the 3
*
*
*
* * *
*
*
*
* * *
* * *
*
*
*
* * *
* * *
* * *

  #include<stdio.h>
  int main()
  {
      int n,i,j,k;
    printf("enter the ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("*\n");
        }
        for(k=1;k<=i;k++)
        {
            printf("* * *\n");
        }
    }
    return 0;
  }








enter the 3
*
* * *
*
* * *
* * *
*
* * *
* * *
* * *

  #include<stdio.h>
  int main()
  {
      int n,i,j,k;
    printf("enter the ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       
            printf("*\n");
        for(k=1;k<=i;k++)
        {
            printf("* * *\n");
        }
    }
    return 0;
  }

emter4
***
***
* 
******
******
* 
*********
*********
* 
************
************



#include <stdio.h>

int main() {
 int n,i,j,k;
 printf("emter");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     for(j=1;j<=(6*i);j++)
     {
         printf("*");
         if(j%(3*i)==0)
         printf("\n");
        
     }
     if(i==n)
     break;
     
         printf("* \n");
     
 }
    
    return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

emter4
****
**
********
***
************
****
****************
#include <stdio.h>

int main() {
 int n,i,j,k;
 printf("emter");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     for(j=1;j<=(4*i);j++)
     {
         printf("*");
         
        
        
     } printf("\n");
     if(n==i)
     break;
     for(k=0;k<i+1;k++)
     {
         printf("*");
     }printf("\n");
 }
    
    return 0;
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



emter4
*****
*
**********
*
*
***************
*
*
*
********************

#include <stdio.h>

int main() {
 int n,i,j,k;
 printf("emter");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     for(j=1;j<=(5*i);j++)
     {
         printf("*");
   
     } printf("\n");
     if(n==i)
     break;
     for(k=0;k<i;k++)
     {
         printf("*");
         printf("\n");
     }
 }
    
    return 0;
}



/======================================================================




emter4
*****
**
**
**********
**
**
**
***************
**
**
**
**
********************
**
**
**
**
**
#include <stdio.h>

int main() {
 int n,i,j,k;
 printf("emter");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     for(j=1;j<=(5*i);j++)
     {
         printf("*");
         
        
        
     } printf("\n");
     
     for(k=0;k<i+1;k++)
     {
         printf("**");
         printf("\n");
     }
 }
    
    return 0;
}




emter4
***
*
*
*****
*
*
***
*
*
*****
#include <stdio.h>

int main() {
 int n,i,j,k;
 printf("emter");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     if(i%2==0)
     {
      printf("*****");
      printf("\n");
     }
     else
     {
      printf("***");
      printf("\n");
      }
     if(i==n)
     break;
     for(k=0;k<2;k++)
     {
         printf("*");
         printf("\n");
     }
 }
    
    return 0;
}

enter3
**
**
*****
**
**
**********
**
**
***************
int main() {
 int n,i,j,k;
 printf("enter");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     for(k=0;k<2;k++)
     {
         printf("**");
         printf("\n");
     }
     for(j=1;j<=5*i;j++)
     {
         printf("*");
     }printf("\n");
 }
    
    return 0;
}


========================================================================



emter4
*****
*
*
**********
*
*
*
*
***************
*
*
*
*
*
*
********************
*
*
*
*
*
*
*
*

#include <stdio.h>

int main() {
 int n,i,j,k;
 printf("emter");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     for(k=1;k<=5*i;k++)
     {
         printf("*");
         
     }printf("\n");
     for(j=1;j<=2*i;j++)
     {
     printf("*\n");
     }
 }
    
    return 0;
}



========================================================================


emter4
*     *
 *   * 
  * *  
   *   
  * *  
 *   * 
*     *
#include <stdio.h>

int main() {
 int n,i,j,m;
 printf("emter");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
    for(j=1;j<=n;j++)
    {
       if(j==i||j+i==n+1)
       {
        printf("*");   
       }
       else
       {
        printf(" ");
    } 
    }printf("\n");
 }
    return 0;
}



========================================================================



emter4
*****
*
*
*
**********
*
*
*
*
*
*
***************
*
*
*
*
*
*
*
*
*
********************



#include <stdio.h>

int main() {
 int n,i,j,k;
 printf("emter");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     for(j=1;j<=5*i;j++)
     {
         printf("*");
     }printf("\n");
     if(i==n)
     break;
     for(k=1;k<=3*i;k++)
     {
         printf("*\n");
     }
 }
    return 0;
}


========================================================================


enter4
**
*
****
*
*
*
********
*
*
*
*
*
****************
*
*
*
*
*
*
*

#include <stdio.h>
#include<math.h>
int main()
{
    int n,i,j,k,m=1;
    printf("enter");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=pow(2,i);j++)
        {
            printf("*");
        }printf("\n");
        for(k=1;k<=m;k++)
        {
            printf("*\n");
            
        }m=m+2;
    }
    return 0;
}


############################################################################


enter4
***
*
*
*
******
******
*
*
*
*********
*********
*********
*
*
*
************
************
************
************

#include <stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(3*i*i);j++)
        {
            printf("*");
            if(j%(3*i)==0)
        printf("\n");
        }
         if(i==n)
          break;
        for(k=1;k<=3;k++)
        {
            printf("*\n");
        }
    }
    return 0;
}


#################################################################

enter4
*
*
***
**
**
******
***
***
*********
****
****
************




#include <stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*i;j++)
        {
            printf("*");
            if(j%i==0)
        printf("\n");
        }
         
        for(k=1;k<=3*i;k++)
        {
            printf("*");
        }printf("\n");
    }
    return 0;
}









/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




enter5
    *
   ***
  *****
 *******
*********

#include <stdio.h>
int main()
{
    int n,i,j,k,m=1;
    printf("enter");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
      for(j=i;j<=n;j++)
      {
          printf(" ");
      }
      for(k=1;k<=m;k++)
      {
          printf("*");
      }
      m=m+2;
      printf("\n") ;
    }
    return 0;
}

enter5
     1 
    1 2 
   1 2 3 
  1 2 3 4 
 1 2 3 4 5 
#include <stdio.h>
#include <stdio.h>
int main()
{
    int n,i,j,k,m;
    printf("enter");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    { 
      for(j=i;j<=n;j++)
      {
          printf(" ");
      }
      for(k=1;k<=i;k++)
      {
          printf("%d ",k);
      }
      
      printf("\n");
    }
    return 0;
}

I
IN
IND
INDI
INDIA

#include <stdio.h>
int main()
{
    int i,j,k,m;
    char a[6]={'I','N','D','I','A'};
    
    
    for(i=1;i<=5;i++)
    {
        for(j=0;j<i;j++)
        {
            
            printf("%c",a[j]);
        }
        printf("\n");
    }
    return 0;
}
M
MA
MAL
MALA
MALAY
MALAYA
MALAYAL
MALAYALA
MALAYALAM

#include <stdio.h>
int main()
{
    int i,j,k,m;
    char a[9]={'M','A','L','A','Y','A','L','A','M'};
    
    
    for(i=1;i<=9;i++)
    {
        for(j=0;j<i;j++)
        {
            
            printf("%c",a[j]);
        }
        printf("\n");
    }
    return 0;
}

enter5
 *****
  *****
   *****
    *****
     *****

#include <stdio.h>
int main()
{
    int i,j,k,m;
    printf("enter");
    scanf("%d",&m);
    
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            
            printf(" ");
        }
        for(k=1;k<=m;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
enter5
 1 2 3 4 5 
  2 4 6 8 
   3 6 9 
    4 8 
     5 


#include <stdio.h>
int main()
{
    int i,j,k,m,p;
    printf("enter");
    scanf("%d",&m);
    
    for(i=1;i<=m;i++)
    {   p=1;
        for(j=1;j<=i;j++)
        {
            
            printf(" ");
        }
        for(k=i;k<=m;k++)
        {
            printf("%d ",p*i);
            p++;
        }
        printf("\n");
    }
    return 0;
}




enter6
1
12
123
1234
12345
123456
12345
1234
123
12
1

#include <stdio.h>
int main()
{
    int i,j,k,m,p;
    printf("enter");
    scanf("%d",&m);
    
    for(i=1;i<=m;i++)
    { 
        for(j=1;j<=i;j++)
        {        
        printf("%d",j);
        }
        printf("\n");
    }
    for(i=m-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}


enter7
A
11
BBB
2222
CCCCC
333333
DDDDDDD

#include <stdio.h>
int main()
{
    int i,j,k,m,p=65,num=1,count;
    printf("enter");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    { 
        for(j=1;j<=i;j++)
        if(i%2==0)
        {        
        printf("%d",num);
        count=1;
        }
        else
        {
        printf("%c",p); 
        count=0;
        }
        printf("\n");
        if(count==1)
        {
            num++;
        }
        else
        {
            p++;
        }
    }    
    return 0;
}


enter5
1
2*2
3*3*3
4*4*4*4
4*4*4*4
3*3*3
2*2
1

#include <stdio.h>
int main()
{
    int i,j,k=1,m,p;
    printf("enter");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=k;j++)
        { if(j%2==0){
            printf("*");}
            else{
                printf("%d",i);
            }
        }k=k+2;
        printf("\n");
    }
    for(i=m;i>=1;i--)
     {   k=k-2;
         for(j=1;j<=k;j++)
         {
           if(j%2==0){
             printf("*");}
             else{
                 printf("%d",i);
             }
         }
         printf("\n");
   }
   return 0;
}

enter4
1
11 
121 
1331 
14641 

#include <stdio.h>
int main()
{
    int i,j,k=1,m,a=1;
    printf("enter");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
   printf("%d ",a);
   a=a*11;
printf("\n");
}
    return 0;
}

enter5
    *
   *_*
  *___*
 *_____*
*_______*
 
#include <stdio.h>

int main()
{
    int i,j,k=1,m,p,n;
    printf("enter");
    scanf("%d",&m);
    
    for(i=1;i<=m;i++)
    {
        for(j=i;j<=m;j++)
        {
            printf(" ");
        }
        for(j=1;j<=k;j++)
        {
            if(j==1||j==k)
            {
            printf("*");
            }
            else
            {
                printf("_");
            }
        }
        k=k+2;
        
        printf("\n");
    }    
    return 0;
}

enter5
    *
   * *
  *   *
 *     *
*********

#include <stdio.h>

int main()
{
    int i,j,k=1,m,p,n;
    printf("enter");
    scanf("%d",&m);
    
    for(i=1;i<=m;i++)
    {
        for(j=i;j<=m;j++)
        {
            printf(" ");
        }
        for(j=1;j<=k;j++)
        {
            if(j==1||j==k||i==m)
            {
            printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        k=k+2;
        
        printf("\n");
    }    
    return 0;
}

enter5
     1
    121
   12321
  1234321
 123454321

#include <stdio.h>

int main()
{
    int i,j,m,k,n=5;
   for(i=1;i<=n;i++){
      for(j=i;j<=n;j++){
          printf(" ");
      }
      for(j=1;j<i;j++){
               printf("%d",j);
      }
      for(j=i;j>=1;j--){
               printf("%d",j);
      }
     
      printf("\n");
   }
    return 0;
}



enter5
**********
*
********
*
*
******
*
*
*
****
*
*
*
*
**
*
*
*
*
*
#include <stdio.h>
int main()
{
    int i,j,k,m,flag;
    printf("enter");
    scanf("%d",&m);
    
    for(i=m;i>=1;i--)
    {
        for(j=1;j<=2*i;j++)
        {
            printf("*");
        }
        printf("\n");
        for(k=i;k<=m;k++)
        {
           printf("*\n"); 
        }
        
    }
    return 0;
}

enter3
x
xx
xxx
x
xx
xxx
xxxx
x
xx
xxx
xxxx
xxxxx
#include <stdio.h>
int main()
{
    int i,j,k,m,flag;
    printf("enter");
    scanf("%d",&m);
    
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=2+i;j++)
        {
           for(k=1;k<=j;k++)
           {
               printf("x");
              
           }printf("\n");
        }
       
        
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int i,j,n=5,k,star=1,space=n-1;
    for(i=1;i<2*n;i++){
        for(j=1;j<=space;j++){
            printf(" ");
        }
    
    for(k=1;k<=2*star-1;k++){
        if(i==5 || k==1 || k==2*star-1 || k==star)
        printf("*");
        else {
            printf(" ");
        }
    }
     printf("\n");
    
    if(i<n){
        star++;
        space--;
    }
    else {
        star--;
        space++;
    }
    } 
    return 0;
} 
    *
   ***
  * * *
 *  *  *
*********
 *  *  *
  * * *
   ***
    *


#include <stdio.h>

int main()
{
   int i,j,k,n=5;
   for(i=n-1;i>=0;i--)
   {
       for(j=n-1;j>i;j--)
       {
           printf(" ");
       }
       for(k=0;k<=i;k++)
       {
           printf("%c",k+65);
       }
       printf("\n");
   }

    return 0;
}
ABCDE
 ABCD
  ABC
   AB
    A


#include <stdio.h>

int main()
{
    int i,j,k=1,n=5;
    char s;
   for(i=1;i<=n;i++){
   
       for(j=1;j<=i;j++){
           printf("* ");
       }
       for(j=i;j<n;j++){
           printf("  ");
           printf("  ");
       }
       for(j=1;j<=k;j++){
           printf("* ");
       }
       k=k+2;
       printf("\n");
   }
    return 0;
}


enter 10
*                            * 
* *                         * * 
* * *                      * * * 
* * * *                   * * * * 
* * * * *                * * * * * 
* * * * * *             * * * * * * 
* * * * * * *          * * * * * * * 
* * * * * * * *       * * * * * * * * 
* * * * * * * * *    * * * * * * * * * 
* * * * * * * * * * * * * * * * * * * * 

#include <stdio.h>

int main()
{
    int i,j,k,m,n,p,q;
    printf("enter ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++)
       {
           printf("* ");
       }
       printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

enter 10
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 
* * * * * * * * 
* * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * 
* * * * * * * * 
* * * * * * * 
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
*


#include <stdio.h>

int main()
{
    int i,j,k,m,n,p,q;
    printf("enter ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=i;j<=n;j++)
       {
           printf("* ");
       }
       printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

enter 8
* * * * * * * * 
* * * * * * * 
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 
* * * * * * * * 

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,k,q,p,n;
    printf("enter");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=i;k<=(2*i)-1;k++)
        {
            printf("%d",k);
        }
        for(q=2*i-2;q>=i;q--)
        {
            printf("%d",q);
        }
        printf("\n");
    }
   
    return 0;
}

enter5
    1
   232
  34543
 4567654
567898765


#include <stdio.h>

int main()
{
    int i,j,k,m=1,n,p,q;
    printf("enter ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++)
       {
           printf("*");
       }
       for(p=i;p<n;p++)
       {
           printf(" ");
       }
       for(q=i;q<n;q++)
       {
           printf(" ");
       }
       for(k=1;k<=i;k++)
       {
       printf("*");
       }
      
       printf("\n");
       
    }
    for(i=2;i<=n;i++)
    {
       for(j=i;j<=n;j++)
       {
           printf("*");
       }
       for(p=1;p<i;p++)
       {
           printf(" ");
       }
       for(q=1;q<i;q++)
       {
           printf(" ");
       }
       for(k=i;k<=n;k++)
       {
       printf("*");
       }
      
       printf("\n");
       
    }
    
    return 0;
}

enter 5
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

#include <stdio.h>

int main()
{
    int i,j,k,m,n,p,q;
    printf("enter");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=i;k>0;k--)
        {
            printf("%d",k);
        }
        for(k=0;k<=i;k++)
        {
        printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
enter5
     0
    101
   21012
  3210123
 432101234


#include <stdio.h>

int main()
{
    int i,j,k,m,p,q;
    int n=7;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||j==1||j+i==n+1)
            {
            printf("* ");
            }
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
enter6
* * * * * * 
*       * 
*     * 
*   * 
* * 
* 

#include <stdio.h>

int main()
{
    int i,j,k,m,n,p,q;
    printf("enter");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("  ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        for(m=1;m<i;m++)
        {
            printf("* ");
        }
        printf("\n");
    }
     for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("  ");
        }
        for(k=i;k<=n;k++)
        {
            printf("* ");
        }
        for(m=i;m<n;m++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
enter5
          * 
        * * * 
      * * * * * 
    * * * * * * * 
  * * * * * * * * * 
    * * * * * * * 
      * * * * * 
        * * * 
          * 

#include <stdio.h>

int main()
{
    int i,j,k,m,n,p,q;
    printf("enter");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
          printf(" ");
        }
        for(k=1;k<=n;k++)
        {
            if(i==n||i==1||k==n||k==1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

enter5
     *****
    *   *
   *   *
  *   *
 *****

#include <stdio.h>

int main()
{
    int i,j,k,m,n,p,q;
    printf("enter");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=1;j<=2*n;j++)
        {
            if(i==j||i+j==2*n)
            printf("%d",i);
            else
            printf(" ");
            
        }
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=2*n;j++)
        {
            
            if(i==j||i+j==2*n)
            printf("%d",i);
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
enter5
1       1
 2     2 
  3   3  
   4 4   
    5    
   4 4   
  3   3  
 2     2 
1       1

#include <stdio.h>

int main()
{
    int i,j,k,m,n,p,q;
    printf("enter");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
        printf("*");
        }
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
        for(m=1;m<i;m++)
        {
            printf(" ");
        }
        for(p=i;p<=n;p++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("*");
        }
        for(k=i;k<n;k++)
        {
            printf(" ");
        }
        for(m=i;m<n;m++)
        {
            printf(" ");
        }
        for(p=1;p<=i;p++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}
enter5
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****

#include <stdio.h>

int main()
{
    int i,j,k,m,n,p,q;
    printf("enter");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n)
        printf("*");
        else
        printf(" ");
        }
       
      printf("\n"); 
    }
    
    
    return 0;
}
enter9
*********
*       *
*       *
*       *
*       *
*       *
*       *
*       *
*********

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *

#include <stdio.h>
int main()
{
   int i,j,k,n=5,star=1,space=n-1;
   for(i=1;i<=2*n;i++){
       for(j=1;j<=space;j++){
           printf(" ");
       }
       for(k=1;k<=2*star-1;k++){
           if(k==1||k==2*star-1){
               printf("*");
           }
           else{
               printf(" ");
           }
       }
       if(i<n){
           star++;
           space--;
       }
           else{
               star--;
               space++;
           }
       
       printf("\n");
   }
    return 0;
}


