#include<stdio.h>
int a[100];

int fib(int n)
{
    for(int i=0;i<=n;i++)
    {
        if(i==0||i==1)
        {
             a[i]=1;

        }
        else
        {
            a[i]=a[i-1]+a[i-2];
        }
    }
     return a[n];
}

int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    fib(n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}