#include<stdio.h>

int wt[]={3,2,5,4};
int val[]={20,16,45,40};
int max(int a,int b){
    if(a>b)
        return a;
    return b;
}
int ks(int n,int w)
{
    if(n==0||w==0)
    {
        return 0;

    }
    if(wt[n-1]<=w)
    {
        return max(val[n-1]+ks(n-1,w-wt[n-1]),ks(n-1,w));
    }
    else
    {
        return ks(n-1,w);
    }
}

int main()
{
    int n, w;
    printf("enter the size: ");
    scanf("%d",&n);
    printf("enter the bag weight:");
    scanf("%d",&w);
    printf("%d",ks(n,w));

}