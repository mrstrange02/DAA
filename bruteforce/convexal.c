#include<stdio.h>

    struct point
    {
        int x,y;

    };
    int main()
    {
        printf("enter the no of points:");
        int n;
        scanf("%d",&n);

        struct point p[n];
        int count=0;

        for(int i=0;i<n;i++)
        {
         printf("enter x and y points %d: ",i+1);
         scanf("%d %d",&p[i].x,&p[i].y);
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                 int a=p[j].y-p[i].y;
                int b=p[i].x-p[j].x;
                int c=p[i].x*p[j].y-p[j].x*p[i].y;
                int nn=0,np=0,val;
                for(int k=0;k<n;k++)
                {
                    val=(a*p[k].x+b*p[k].y-c);
                    if(val>0)
                {
                    np++;
                }
                else if(val<0)
                {
                    nn++;
                }
                }
                
                if(np==0||nn==0)
                {
                    count++;
                    //printf("point %d: [%d,%d] point %d: [%d,%d] are covex hull\n",i+1,p[i].x,p[i].y,j+1,p[j].x,p[j].y);
                    //printf("%d %d",p[i].x,p[i].y);
                }
            }
        }
        printf("Total Edges are %d",count);//n-1 apart from borders
        
    }
