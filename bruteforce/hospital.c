#include<stdio.h>
#include<math.h>
#include<limits.h>
struct point
{
    int x,y;
};
int main()
{
    int n;
    printf("enter the no of points : ");
    scanf("%d",&n);

    struct point p[n];

    for(int i=0;i<n;i++)
    {
        printf("enter x,y point %d\n ",i+1);
          
        scanf("%d %d",&p[i].x,&p[i].y);
    }
    float min=INT_MAX;
    int d;
    int a;
    for(int i=0;i<n;i++)
    {
        float avg=0,sum=0;
        for(int j=0;j<n;j++)
        {
            d=sqrt(pow((p[i].x-p[j].x),2)+pow((p[i].y-p[j].y),2));
            
            sum+=d;   
        }
        avg=sum/n;
        printf("%f ",avg);
        if(avg<min){
            min=avg;
            a=i;
        }
    }
    printf("[%d,%d]",p[a].x,p[a].y);
}
