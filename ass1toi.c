#include<stdio.h>
int GCD(int,int);
void main()
{ int m,n,res;
  printf("enter the two nos.");
  scanf("%d\n %d",&m,&n);
  res=GCD(m,n);
  printf("the GCD is: %d",res);
}
int GCD(int a,int b)
{ if(a==0)
  return b;
  if(b==0)
  return a;
  else
  return GCD(b,a%b);
}  
    
