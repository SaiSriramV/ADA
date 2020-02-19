#include<stdio.h>
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void selectionsort(int arr[], int n) 
{ 
    int i, j, min; 
  
   
    for (i = 0; i < n-1; i++) 
    { 
        
        min= i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min]) 
            min = j; 
  
       
        swap(&arr[min], &arr[i]); 
    } 
} 
void klarge(int arr[], int n, int k) 
{int i;

 for (i=n-1;i>n-k-1;i--) 
  printf(" %d ",arr[i]);      
}
void main()
{ int arr[100];
 int i,n,c,k;
  printf("enter the size of the array\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
         printf("enter the value of k:\n");
         scanf("%d",&k);
         selectionsort(arr,n);
         klarge(arr,n,k);
} 







        
