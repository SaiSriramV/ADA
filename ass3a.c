#include <time.h>
#include <stdlib.h>
#include<stdio.h>
int main()
{  clock_t start_t, end_t;
 double total_t;
 start_t = clock();
 
int arr[20],n,min,i,j;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the array elements\n");
for( i=0;i<n;i++)
{ scanf("%d",&arr[i]);}

for(i=0;i<n;i++)
{ min=i;
   for(j=i+1;j<n;j++)
  if(arr[j]<arr[min])
     min=j;
  
  int temp=arr[i];
  arr[i]=arr[min];
  arr[min]=temp;
} 
printf("elements\n");
for(i=0;i<n;i++)
printf("%d\n",arr[i]);

end_t = clock();
 total_t = (double)end_t - start_t/CLOCKS_PER_SEC;
 printf("Total time taken by CPU: %f\n", total_t  ); 
 return 0;
 }
 
 
 
 
 
 

