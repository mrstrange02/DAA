#include<stdio.h>
int a[20][20];

int wt[]={2,5,6,3};

int ss(int n,int s)
{
   for(int i=0;i<=n;i++)
   {
    for(int j=0;j<=s;j++)
    {
        if(j==0)
        {
            a[i][j]=1;
            continue;
        }
        if(i==0)
        {
            a[i][j]=0;
            continue;
        }
        if(wt[i-1]<=j)
        {
            a[i][j]=a[i-1][j-wt[i-1]]+a[i-1][j];
        }
        else
        {
            a[i][j]=a[i-1][j];
        }
    }
   }
   return a[n][s];
}

int main()
{
    int n,s;
    printf("enter the size: ");
    scanf("%d",&n);
    printf("enter the sum weight: ");
    scanf("%d",&s);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=s;j++)
        {
            a[i][j]=-1;
        }
    
    }
    printf("%d",ss(n,s));

}