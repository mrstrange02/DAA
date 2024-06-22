#include<stdio.h>
#include<math.h>

void per(int,int);

int a[10];
void per(int n,int k)
{
    if(k==n)
    {
        for(int i=0;i<n;i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
        return;

    }

    for(int i=0;i<2;i++)
    {
        a[k]=i;
        per(n,k+1);
    }
}

int main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    per(n,0);
}