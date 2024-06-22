#include<stdio.h>
#include<stdlib.h>
int a[20];

int issafe(int k,int i)
{
    for(int j=0;j<k;j++)
    {
        if(a[j]==i)
            return 0;
            if(abs(k-j)==abs(i-a[j]))
            return 0;
        
    }
    return 1;
}

void queen(int n,int k)
{
    if(k==n)
    {
        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
        return;
    }

    for(int i=0;i<n;i++)
    {
        if(issafe(k,i))
        {
            a[k]=i;
            queen(n,k+1);
        }
    }
}

int main()
{
    int n;
    printf("enter the n");
    scanf("%d",&n);
    queen(n,0);
}