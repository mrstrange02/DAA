/*#include<stdio.h>

int step(int n)
{
    if(n==0)
    {
        return 1;
    }
     if(n<=0)
    {
        return 0;
}
   
else{
    return step(n-1)+step(n-2);
}
}
int main()
{
    int n;
    printf("enter the total steps:");
    scanf("%d",&n);
    printf("%d",step(n));
}*/


#include<stdio.h>

int step(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 2;
    }
    else
    {
        return step(n-1)+step(n-2)+step(n-3);
    }
}

int main()
{
    int n;
    printf("enter the no of steps");
    scanf("%d",&n);
    printf("%d",step(n));
}

