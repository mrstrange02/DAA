#include<stdio.h>



int main()
{
    int n;
    printf("enter the value n: ");
    scanf("%d",&n);
    int a[n+1][n+1];
    int k=1;
 for(int l=0;l<=n;l++)
  {
    for(int i=0;i<=n-l;i++)
    {
      int j=i+l;
      a[i][j]=k++;
    }
}
    
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
}




