#include<stdio.h>
int a[20][20];
int wt[]={2,5,6,3};

int ss(int n,int s)
{
    
    if(s==0)
    {
       return a[n][s]=1;

    }
    if(n==0)
    {
        return a[n][s]=0;
    }
 if(wt[n-1]<=s)
 {
    return a[n][s]=ss(n-1,s-wt[n-1])+ss(n-1,s);
 }
 else
 {
    return a[n][s]=ss(n-1,s);
 }
}

int main()
{
    int n,w;
    printf("enter the size: ");
    scanf("%d",&n);
    printf("enter the sum weight: ");
    scanf("%d",&w);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            a[i][j]=-1;
        }
    }
    printf("%d",ss(n,w));

}