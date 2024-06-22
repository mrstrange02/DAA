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

    int min=INT_MAX,a,b;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int d=sqrt(pow((p[i].x-p[j].x),2)+pow((p[i].y-p[j].y),2));
            if(d<min)
            {
                min=d;
                a=i;
                b=j;

            }
        }
    }
    printf("two points with shortest distance are: \n point 1:[%d,%d]\n point 2: [%d,%d]\n",p[a].x,p[a].y,p[b].x,p[b].y);

}
