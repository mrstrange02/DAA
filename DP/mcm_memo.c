#include<stdio.h>
#include<limits.h>
 int a[10];
 int b[10][10];
int mcm(int i,int j)
{
    if(b[i][j]!=-1)
    {
        return b[i][j];
    }

     if(i==j)
     {
      return b[i][j]=0;
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

 return b[i][j]=min;
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

   for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            b[i][j]=-1;
        }
    }

    int num=mcm(1,n);
    printf("Minimum number of Multiplication %d",num);

}
