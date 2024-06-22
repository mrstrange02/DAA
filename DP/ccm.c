#include<stdio.h>
#include<ctype.h>
#include<limits.h>

int wt[]={2,5,6,3};
int min(int a,int b)
{
    if(a<b)
    {
    return a;
    }
    else{

    
       return b;
    }
}

int ccm(int n,int s)
{
int maxi=INT_MAX;
    if(s==0)
    {
        return 0;

    }
    if(n==0)
    {
      return  maxi-1;
    }
    if(wt[n-1]<=s)
    {
      return min(1+ccm(n,s-wt[n-1]),ccm(n-1,s));
    }
    else
    {
        return ccm(n-1,s);
    }
}


int main()
{
    int n,s;
    printf("enter the n ");
    scanf("%d",&n);
    printf("enter the sum");
    scanf("%d",&s);
    printf("%d",ccm(n,s));

}