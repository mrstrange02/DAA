#include<stdio.h>
#include<limits.h>
int a[100];


int mcm(int i,int j)
{
    if(i==j)
    {
        return 0;
    }
    
    int min=INT_MAX;
    for(int k=i;k<j;k++)
    {
        int val=mcm(i,k)+mcm(k+1,j)+a[i-1]*a[k]*a[j];

        if(val<min)
        {
            min=val;
        }
    }
        return min;

}

int main()
{
    int n;
    printf("enter the number of matrices: ");
    scanf("%d",&n);
   for(int i=0;i<=n;i++)
   {
      scanf("%d",&a[i]);
   }
    int num=mcm(1,n);
    
    printf("Minimum number of Multiplication %d",num);
}
