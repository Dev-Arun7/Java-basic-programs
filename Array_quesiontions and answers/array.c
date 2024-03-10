 1. Write a program to reverse an array without using an additional array?
19. Write a program to print an array of random numbers in reverse order.

#include <stdio.h>
#include <string.h>

int main()
{
    
   int a[100]={1,3,4,2,5};
   int n=5;
   int i,j,temp;
   
   for(i=0,j=n-1;i<j;i++,j--){
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
   }
   for(i=0;i<n;i++){
       printf("%d",a[i]);
   }


    return 0;
}


2. How to merge two unsorted arrays in sorted order ?
4. Write a program to merge and sort elements of two different arrays
38. Write a program to merge two arrays of the same size sorted in descending 
order.


#include <stdio.h>


int main()
{
    
   int a[100]={2,5,7,4,1};
   int b[100]={3,6,8,9,10};
   int c[100];
   int n1=5,n2=5,i,j,k=0,temp;
   int n3=n1+n2;
   
   for(i=0;i<n3;i++){
       c[i]=a[i];
       if(i>n1-1){
           c[i]=b[k];
           k++;
       }
   }
   for(i=0;i<n3-1;i++){
       for(j=i+1;j<n3;j++){
           if(c[i]>c[j]){
               temp=c[i];
               c[i]=c[j];
               c[j]=temp;
           }
       }
   }
   printf("Sorteed\n");
   for(i=0;i<n3;i++){
       printf("%d",c[i]);
   }


    return 0;
}



3. How to merge two sorted arrays?


#include <stdio.h>


int main()
{
    
   int a[100]={1,2,3,4,5};
   int b[100]={6,7,8,9,10};
   int c[100];
   int n1=5,n2=5,i,j,k=0,temp;
   int n3=n1+n2;
   
   for(i=0;i<n3;i++){
       c[i]=a[i];
       if(i>n1-1){
           c[i]=b[k];
           k++;
       }
   }

   printf("Sorteed\n");
   for(i=0;i<n3;i++){
       printf("%d",c[i]);
   }


    return 0;
}



5. Write a program to print all unique elements in an array.
12. Write a program to print all unique elements in an array


#include <stdio.h>

int main()
{ 
   int a[100]={1,2,1,4,5,4};
   int n=6,count,i,j;
  
  for(i=0;i<n;i++){
      count=0;
      for(j=0;j<n;j++){
          if(i!=j && a[i]==a[j]){
                  count++;
                  break;
          }
          
      }
      if(count==0){
          printf("%d",a[i]);
      }
  }
    return 0;
}


?Delete all unique elements in an array

#include <stdio.h>

int main()
{
    int a[100]={2,1,4,6,2,5,4};
    int n=7,count;
    int i,j,k;
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(i!=j && a[i]==a[j]){
                count =1;
                break;
            }
        }
        if(count==0){
            for(k=i;k<n;k++){
                a[k]=a[k+1];
            }
            n--;
            i--;
        }
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }

    return 0;
}


?. Write a program to print duplicate elements in an array

#include <stdio.h>

int main()
{ 
   int a[100]={1,2,1,4,5,4};
   int n=6,count,i,j;
  
  for(i=0;i<n;i++){
      count=0;
      for(j=0;j<n;j++){
          if(i!=j && a[i]==a[j]){
                  count++;
                  a[j]=-1;
                  
          }
          
      }
      if(count==1 && a[i]!=-1){
          printf("%d",a[i]);
      }
  }
    return 0;
}


?Delete all duplicate elements in an array

#include <stdio.h>

int main()
{
    int a[100]={2,1,4,2,5,4};
    int n=6,count;
    int i,j,k;
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(i!=j && a[i]==a[j]){
                count=1;
                a[j]=-1;
            }
            if(count==1 || a[i]==-1){
                for(j=i;j<n;j++){
                    a[j]=a[j+1];
                }
                n--;
                i--;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}

?. Print all prime numbers in an array

int main()
{
    
   int a[100]={2,9,7,5,4,10};
   int n=6,flag=0,i,j;
   
   for(i=0;i<n;i++){
       flag=0;
       for(j=2;j<a[i];j++){
           if(a[i]%j==0){
               flag=1;
               break;
           }
       }
       if(flag==0){
           printf("%d",a[i]);
       }
       
   }
   
   
   return 0;
}




6. Write a program to remove all the prime numbers in an array



#include <stdio.h>

int main()
{
    
   int a[100]={2,9,7,5,4,10};
   int n=6,flag,i,j;
   
   for(i=0;i<n;i++){
       flag=0;
       for(j=2;j<a[i];j++){
           if(a[i]%j==0){
               flag=1;
               break;
           }
       }
       if(flag==0){
           for(j=i;j<n;j++){
               a[j]=a[j+1];
           }
           n--;
           i--;
       }
   }
   for(i=0;i<n;i++){
       printf("%d ",a[i]);
   }
   return 0;
}


7. Program to find the average of n (n < 10) numbers using arrays


#include <stdio.h>

int main()
{
   int a[100];
   int n,i,j,count;
   float avg=0,sum=0;
   printf("Enter the size of array:");
   scanf("%d",&n);
   printf("Enter the numbers < 10:\n");
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++){
       count=0;
       if(a[i]<10){
         sum=sum+a[i];
         }
       else{
           
           printf("Entered number > 10:\n");
         count=1;
         break;
       }
   }
   if(count!=1){
       avg=sum/n;
   printf("average is %f",avg);
   
   }
   
  
      
    return 0;
}




8. Program to find the average of n numbers using arrays


#include <stdio.h>


int main()
{
   int a[100];
   int n,i;
   float sum,avg;
   printf("Enter the number:");
   scanf("%d",&n);
       for(i=0;i<n;i++){
           a[i]=i+1;
           sum=sum+a[i];
          }
   avg=sum/n;
   printf("Average of the number is:%f",avg);

    return 0;
}


9. Write a Program to Delete an Integer from an Array of random numbers


#include <stdio.h>

#include <stdio.h>
int main()
{
    int a[100];
    int n,i,j,pos;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array numbers are:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Enter the position of number you want to delete:");
    scanf("%d",&pos);
   
    
        for(j=pos-1;j<n;j++){
            a[j]=a[j+1];
        }
        n--;
         printf("Array numbers are:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}


10. Write a program to find the sum of all elements of the array

#include <stdio.h>


int main()
{
 int a[100];
 int i,n,j,sum=0;
 printf("Enter the size of array:");
 scanf("%d",&n);
 printf("Enter the elements:\n");
 for(i=0;i<n;i++){
     scanf("%d",&a[i]);
 }
 for(j=0;j<n;j++){
     sum=sum+a[j];
 }
 printf("The sum of elements are %d",sum);
    
    
   
   return 0;
}


11. Write a program to copy the elements of one array into another array

#include <stdio.h>


int main()
{
 int a[100];
 int b[100];
 int i,n;
 printf("Enter the size of array:");
 scanf("%d",&n);
 printf("Enter the elements:\n");
 for(i=0;i<n;i++){
     scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++){
     b[i]=a[i];
 }
 printf("Array1:");
 for(i=0;i<n;i++){
     printf("%d ",a[i]);
 }
 printf("\n");
 printf("Array2:");
 for(i=0;i<n;i++){
     printf("%d ",b[i]);
 } 
   return 0;
}


13. Write a program to insert a element in specified position in an array
43. Write a program to insert New value in the array (unsorted list ) in (specific 
position)
42. Write a program to insert New value in the array (sorted list ).

#include <stdio.h>
int main()
{
    int a[100];
    int n,i,pos,num;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array numbers are:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Enter the position of number you want to add:");
    scanf("%d",&pos);
     printf("Enter the number to add:");
    scanf("%d",&num);
    
        for(i=n-1;i>=pos-1;i--){
            a[i+1]=a[i];
            a[i]=num;  
        }
	n++;
         printf("Array numbers are:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
   
   return 0;
}


14. Write a program to sort elements of array in ascending order

#include <stdio.h>

int main()
{
    
   int a[100]={2,5,7,4,1};
 
   int n=5,i,j,k=0,temp;
   
   for(i=0;i<n-1;i++){
       for(j=i+1;j<n;j++){
           if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
   printf("Sorteed\n");
   for(i=0;i<n;i++){
       printf("%d",a[i]);
   }


    return 0;
}


15. Write a program to insert New value in the array (sorted list )

#include <stdio.h>
int main()
{
    int a[100];
    int n,i,j,temp,num;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array numbers are:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
     printf("Enter the number to add:");
    scanf("%d",&num);
    a[n]=num;
    n++;
    for(i=0;i<n-1;i++){
       for(j=i+1;j<n;j++){
           if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
         printf("Array numbers are:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    } 
   
   return 0;
}



16. Write a program to sort an array and print the count of unique elements in the array.

#include <stdio.h>
int main()
{
    int a[100];
    int n,i,sum=0,temp,j,count=0;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array numbers are:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<n-1;i++){
       for(j=i+1;j<n;j++){
           if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
   
   for(i=0;i<n;i++){
      count=0;
      for(j=0;j<n;j++){
          if(i!=j){
              if(a[i]==a[j]){
                  count++;
              }
          }
          
      }
      if(count==0){
          sum=sum+1;
      }
  }
   
         printf("Array numbers are:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
     printf("Count of unique numbers:%d",sum);
    
   
   return 0;
}


17. Write a program to print the sum of unique elements from an array

#include <stdio.h>
int main()
{
    int a[100];
    int n,i,sum=0,temp,j,count=0;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array numbers are:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
   
   for(i=0;i<n;i++){
      count=0;
      for(j=0;j<n;j++){
          if(i!=j){
              if(a[i]==a[j]){
                  count++;
              }
          }
          
      }
      if(count==0){
          sum=sum+a[i];
      }
  }
   
         printf("Array numbers are:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
     printf("Count of unique numbers:%d",sum);
    
   
   return 0;
}



18. Write a program to delete all the multiples of 5 in an array

#include <stdio.h>

int main()
{
   int a[100]={2,5,7,10,4};
   int n=5,flag=0,temp,i,j;
  
   for(i=0;i<n;i++){
       if(a[i]%5==0){
           for(j=i;j<n;j++){
         a[j]=a[j+1];
         }
           n--;
           i--;
       }
   }
   for(i=0;i<n;i++){
       printf("%d ",a[i]);
   }
   return 0;
}

33. Write a program to read an array and count even and odd numbers in an array and 
also Print sum of the even numbers in an array.
27. Write a program to count even and odd numbers in an array and also print the sum of 
the even numbers in an array.

#include <stdio.h>

int main()
{
    
   int a[100];
   int even=0,odd=0,n,i,sum=0;
   printf("Enter the size of array: ");
   scanf("%d",&n);
   printf("Enter the numbers:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
 
   for(i=0;i<n;i++){
       if(a[i]%2==0){
           even++;
           sum=sum+a[i];
       }else{
           odd++;
       }
   }
   printf("%d Even Numbers\n",even);
   printf("%d Odd Numbers\n",odd);
   printf("Sum of Even numbers:%d",sum);
 
    return 0;
}


?.Program to print all prime numbers in an array

#include <stdio.h>

int main()
{
    
   int a[100];
   int flag=0,n,j,i;
   printf("Enter the size of array: ");
   scanf("%d",&n);
   printf("Enter the numbers:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Prime numbers in array are: ");
    for(i=0;i<n;i++){
    flag=0;
   for(j=2;j<a[i];j++){
       if(a[i]%j==0){
           flag=1;
          break;
       }
   }
   if(flag==0){
       printf("%d ",a[i]);
   }
}
 
    return 0;
}

?.Print to count the total number of all prime numbers in an array

#include <stdio.h>

int main()
{
    
   int a[100];
   int flag,n,j,i,count=0;
   printf("Enter the size of array: ");
   scanf("%d",&n);
   printf("Enter the numbers:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
    flag=0;
   for(j=2;j<a[i];j++){
       if(a[i]%j==0){
           flag=1;
          break;
       }
   }
   if(flag==0){
      count++;
   }
}
  printf("Count of prime numbers :%d",count);
 
    return 0;
}



20. How do you find the duplicate number on a given integer array

#include <stdio.h>


int main()
{
    
   int a[100]={1,2,1,4,5,4};
   int n=6,count,i,j;
  
  for(i=0;i<n;i++){
      count=0;
      for(j=0;j<n;j++){
          if(i!=j){
              if(a[i]==a[j]){
                  count++;
              }
          }
          
      }
      if(count==1){
          printf("%d ",a[i]);
      }
  }


    return 0;
}


21. Write a program to delete two elements after the occurrence of a prime number and 
replace all even numbers by 0.
29. Write a program to delete two elements after the occurrence of a prime number and 
replace all even numbers by 3

#include <stdio.h>

int main()
{
    
   int a[100]={2,9,7,5,4,5,7,10,4,6};
   int n=10,flag,i,j;
   
   for(i=0;i<n;i++){
       flag=0;
       for(j=2;j<a[i];j++){
           if(a[i]%j==0){
               flag=1;
               break;
           }
       }
       if(flag==0){
           if(i==n-1){
               n=n;
           }
           else if(i==n-2){
               n=n-1;
           }
           else{
           for(j=i;j<n;j++){
               a[j+1]=a[j+3];
               a[j+2]=a[j+4];
           }
           n=n-2;
           }
       }
       if(a[i]%2==0){
           a[i]=0;
       }
   }
   for(i=0;i<n;i++){
       printf("%d ",a[i]);
   }
   return 0;
}

22. Write a program to sort an array and print the count of ‘1’ in the array.
34. Write a program to sort an array and print the count of ‘1’ in the array.

#include <stdio.h>

int main()
{
    
   int a[100]={1,2,1,4,5,4};
   int n=6,temp,count=0,i,j;
   for(i=0;i<n-1;i++){
       for(j=i+1;j<n;j++){
           if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
   for(i=0;i<n;i++){
       if(a[i]==1){
           count++;
       }
   }
          printf("count of 1: %d ",count);

    return 0;
}


23. In an array, replace all the prime numbers with ‘ * ‘ & remove all the odd numbers

#include <stdio.h>

int main()
{
    
   int a[100]={2,9,7,10,4,9};
   int n=6,flag=0,i,j;
   
   for(i=0;i<n;i++){
       flag=0;
       for(j=2;j<a[i];j++){
           if(a[i]%j==0){
               flag=1;
               break;
           }
       }
       if(flag==0){
           a[i]='*';
       }
       if(a[i]%2!=0){
         for(j=i;j<n;j++){
         a[j]=a[j+1];
         }
           n--;
           i--;
       }
   }
   for(i=0;i<n;i++){
       if(a[i]=='*'){
            printf("%c ",a[i]);
       }else{
            printf("%d ",a[i]);
       }
      
   }
   return 0;
}



24. Sort the array and replace elements in an odd position with * and remove prime 
numbers
31. Sort the array and replace elements in an odd position with * and remove prime 
numbers

#include <stdio.h>

int main()
{
    
   int a[100]={2,9,7,10,4,9};
   int n=6,flag=0,temp,i,j;
  
    for(i=0;i<n-1;i++){
       for(j=i+1;j<n;j++){
           if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
   for(i=0;i<n;i++){
       flag=0;
       for(j=2;j<a[i];j++){
           if(a[i]%j==0){
               flag=1;
               break;
           }
       }
       if(flag==0){
           for(j=i;j<n;j++){
         a[j]=a[j+1];
         }
           n--;
           i--;
       }
       
       if(a[i]%2!=0){
         a[i]='*';
       }
   }
   for(i=0;i<n;i++){
       printf("%d ",a[i]);
   }
   return 0;
}


25. Find the sum of unique prime numbers in an array

#include <stdio.h>

int main()
{ 
   int a[100]={8,2,7,5,5,4};
   int n=6,count,sum=0,i,j;
  
  for(i=0;i<n;i++){
      count=0;
      for(j=0;j<n;j++){
          if(i!=j){
              if(a[i]==a[j]){
                  count++;
              }
          }
      }
      for(j=2;j<a[i];j++){
          if(a[i]%2==0){
              count++;
              break;
          }
      }
      if(count==0){
          sum=sum+a[i];
      }
  }
  printf("Sum of unique prime numbers:%d",sum);
    return 0;
}


26. In an array remove all the prime numbers > 50 and remove all the non-prime numbers 
< 50.

#include <stdio.h>

int main()
{
    
   int a[100]={73,61,7,22,4,58};
   int n=6,flag,i,j;
   
   for(i=0;i<n;i++){
       flag=0;
       for(j=2;j<a[i];j++){
           if(a[i]%j==0){
               flag=1;
               break;
               }
       }
       if(flag==1 && a[i]<50){
               for(j=i;j<n;j++){
               a[j]=a[j+1];
               }
                n--;
                i--;
        }
       if(flag==0 && a[i]>50){
           for(j=i;j<n;j++){
               a[j]=a[j+1];
           }
           n--;
           i--;
       }
   }
   for(i=0;i<n;i++){
       printf("%d ",a[i]);
   }
   return 0;
}


30. Write a program to move all zeros to the beginning of an array.

#include <stdio.h>

int main()
{
    
   int a[100]={2,5,0,4,0};
 
   int n=5,i,j,k=0,temp;
   
   for(i=0;i<n-1;i++){
       for(j=i+1;j<n;j++){
           if(a[j]==0){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
   printf("after\n");
   for(i=0;i<n;i++){
       printf("%d",a[i]);
   }


    return 0;
}


35. Write a program to delete two elements after the occurrence of an even number

#include <stdio.h>

int main()
{
    
   int a[100]={2,9,7,4,4,5,8,10};
   int n=8,flag,i,j;
   
   for(i=0;i<n;i++){

       if(a[i]%2==0){
           if(i==n-1){
               n=n;
           }
           else if(i==n-2){
               n=n-1;
           }
           else{
           for(j=i;j<n;j++){
               a[j+1]=a[j+3];
               a[j+2]=a[j+4];
           }
           n=n-2;
           }
       }
   }
   for(i=0;i<n;i++){
       printf("%d ",a[i]);
   }
   return 0;
}

36. Write a program to find array elements that repeat 2 times in the array.

#include <stdio.h>

int main()
{ 
   int a[100]={1,2,1,1,5,2,5,6,7};
   int n=9,count,i,j;
  
  for(i=0;i<n;i++){
      count=0;
      for(j=0;j<n;j++){
          if(i!=j && a[i]==a[j]){
                  count++;
                  a[j]=-1;
          }
          
      }
      if(count==1 && a[i]!=-1){
          printf("%d",a[i]);
          
      }
  }
    return 0;
}


37. Write a program to move all zeros to the end of an array

#include <stdio.h>

int main()
{
    
   int a[100]={2,5,0,4,0};
 
   int n=5,i,j,k=0,temp;
   
   for(i=0;i<n-1;i++){
       for(j=i+1;j<n;j++){
           if(a[j]==0){
               temp=a[j+1];
               a[j+1]=a[j];
               a[j]=temp;
           }
       }
   }
   printf("after\n");
   for(i=0;i<n;i++){
       printf("%d",a[i]);
   }


    return 0;
}


39. Write a program to count the frequency of each element of an array

#include <stdio.h>

int main()
{
    
   int a[100]={2,9,7,4,4,5,8,10};
   int n=8,count,i,j,value=-1;
   int m[n];
   
   for(i=0;i<n;i++){
    count=1;
       for(j=i+1;j<n;j++){
           if(a[i]==a[j]){
               count++;
               m[j]=value;
           }
       }
       if(m[i]!=value){
           m[i]=count;
       }
   }
   printf("Frequency of elements:\n");
   for(i=0;i<n;i++){
       if(m[i]!=value){
           printf("%d-%d\n",a[i],m[i]);
       }
   }
   return 0;
}

40. Write a program to find the maximum and minimum element in an array.

#include <stdio.h>

int main()
{
   int a[100]={3,2,10,8,7};
   int n=5,i,j,temp;
   for(i=0;i<n-1;i++){
       for(j=i+1;j<n;j++){
           if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
       printf("minimum element is %d and maximum is %d",a[0],a[n-1]);
    return 0;
}


41. Write a program to separate odd and even integers in separate arrays.

#include <stdio.h>

int main()
{
    
   int a[100]={2,1,3,5,4};
   int b[100],c[100];
   int k=0,m=0,n=5,i,sum=0;
 
   for(i=0;i<n;i++){
       if(a[i]%2==0){
           b[k]=a[i];
           k++;
       }else{
           c[m]=a[i];
           m++;
       }
   }
  printf("Even array:");
  for(i=0;i<k;i++){
      printf("%d",b[i]);
  }
  printf("\n");
   printf("Odd aray:");
   for(i=0;i<m;i++){
      printf("%d",c[i]);
  }
 
    return 0;
}



 
