#include<stdio.h>
int a[10][10];

int wt[]={3,2,5,4};
int val[]={20,16,45,40};
int max(int a,int b){
    if(a>b)
        return a;
    return b;
}
int ks(int n,int w)
{
  if(a[n][w]!=-1)
  {
     return a[n][w];
  }
    if(n==0||w==0)
     return a[n][w]=0;
     
     if(wt[n-1]<=w)
        return a[n][w]=max(val[n-1]+ks(n-1,w-wt[n-1]),ks(n-1,w));
     
  
  else{
    return a[n][w]=ks(n-1,w);
  }

}


int main()
{
    int n,w;
    printf("enter the size: ");
    scanf("%d",&n);
    printf("enter the bag weight: ");
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
