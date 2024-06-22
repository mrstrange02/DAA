#include<stdio.h>
int a[10][10];
int val[]={20,16,45,40};
int wt[]={3,2,5,4};
int max(int a,int b)
{
    if(a>b)
     return a;
    return b; 
}
int ks(int n,int w)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            if(i==0||j==0)
            {
                a[i][j]=0;
            }
            if(wt[i-1]<=j)
            {
                a[i][j]=max(val[i-1]+a[i-1][j-wt[i-1]],a[i-1][j]);
            }
            else{
                a[i][j]=a[i-1][j];
            }
        }
    }
    return a[n][w];
}

int main()
{
    int n,w;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter bag weight: ");
    scanf("%d",&w);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            a[i][j]=-1;
        }
    }
    printf("%d",ks(n,w));
}