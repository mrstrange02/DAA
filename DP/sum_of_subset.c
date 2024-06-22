#include <stdio.h>
 int wt[]={2,5,6,3};

 int ss(int n,int sum)
{
 if(sum==0)
 {
    return 1;
 }
 if(n==0)
    return 0;

 
 if(wt[n-1]<=sum)
 {
    return ss(n-1,sum-wt[n-1])+ss(n-1,sum);
 }
 else
 {
    return ss(n-1,sum);
 }
}

int main()
{
    int n,sum;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the weight sum: ");
    scanf("%d",&sum);
    printf("%d",ss(n,sum));
}