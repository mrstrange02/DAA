#include<stdio.h>
int a[100];

int fib(int n)
{
      if(a[n]!=-1)
      {
        return a[n];
      }
      if(n==0||n==1)
      {
         return a[n]=1;
      }
      else
      {
        return a[n]=fib(n-1)+fib(n-2);
      }
}


int main()
{

int n;
  printf("enter n:");
  scanf("%d",&n);

    for(int i=0;i<n;i++){
      a[i]=-1;
    }
    //printf("%d",fib(n-1));
    fib(n-1);
    for(int i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
}