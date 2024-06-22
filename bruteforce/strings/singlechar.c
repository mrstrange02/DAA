#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    printf("enter the main string: ");
    gets(a);
    printf("enter substring:");
    gets(b);
    int f1=0;
    int index;
    int m=strlen(a);
    int n=strlen(b);
    int i;
    for(i=0;i<m-n;i++)
    {
        if(b[0]==a[i])
        {
             int f=1;
             for(int j=0,temp=0;j<n;j++,temp+=2)
             {
                if(b[j]!=a[i+temp])
                {
                    f=0;
                    break;
                }
             }
             if(f==1)
             {
                f1=1;
                index=i;
                break;
             }
        }
    }
    if(f1==1)
    {
       printf("found %d",index);
    }
    else
    {
        printf("not found");
    }


}