#include<stdio.h>

int a[40];
int sum=0;

int swap(int i,int j)
{
  int temp=a[i];
  a[i]=a[j];
  a[j]=temp;
  }
  
  
  int main()
  {
    int n;
    printf("enter the n size: ");
    scanf("%d",&n);
    
    printf("enter the elements:");
    for(int i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
   }
   
   while(n>=2)
   {
     int s=0;
     int min=0;
     for(int i=0;i<n;i++)// find smallest element
     
     {
       if(a[i]<a[min])
       {
          min=i;
          }
          }
          
          swap(n-1,min);
          
          min=0;
          
          for(int i=0;i<n-1;i++)
          {
            if(a[i]<a[min])
            {
               min=i;
               }
               }
               swap(n-2,min);
               
               s=a[n-1]+a[n-2];
               a[n-2]=s;
               sum=sum+s;
               
               n--;
               }
               
               printf("sum %d",sum);
               }
               
          
