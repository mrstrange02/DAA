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
    int m=strlen(a);
    int n=strlen(b);
    for(int i=0;i<=m-1;i++)
    {
        if(b[0]==a[i])
        {
             int f=1;
             for(int j=0,temp=0;j<n;j++,temp+=1+j)
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
                break;
             }
        }
    }
    if(f1==1)
    {
       printf("found");
    }
    else
    {
        printf("not found");
    }


}