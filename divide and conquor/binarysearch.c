#include<stdio.h>
int main()
{
    int i,j,k,n,t;
    printf("enter the size: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    
    printf("enter the key: ");
    scanf("%d",&k);
    int low=0,mid,high=n-1;
    while(low<=high)
{
    mid=(low+high)/2;
    if(k==a[mid])
    {
        printf("item is found at %d",mid);
        return n;

    }
    else if(a[mid]<k)
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;
    }
    }
}
