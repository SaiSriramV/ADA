
#include<stdio.h>
#include<time.h>

void insort(int arr[], int n) 
{ 
    int i, ele, j; 
    for (i = 1; i < n; i++) { 
        ele = arr[i]; 
        j = i - 1; 
  
       
       while (j >= 0 && arr[j] > ele) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = ele; 
    } 
} 


void main()
{clock_t start_t, end_t;
 double total_t;
 start_t = clock(); 
int arr[20],i,n;
 printf("enter the size of the array");
 scanf("%d",&n);
 printf("enter the array elements\n");
 for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
 printf("the array before sorting\n");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
insort(arr,n);
printf("array after sortng\n");
for(i=0;i<n;i++)
printf("%d " ,arr[i]);
end_t = clock();
 total_t = (double)end_t - start_t/CLOCKS_PER_SEC;
 printf("Total time taken by CPU: %f\n", total_t );
 }
 
 
