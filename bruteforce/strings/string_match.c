#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[10];
    printf("enter the main string: ");
    scanf("%s",a);
    printf("enter the sub string: ");
    scanf("%s",b);
    int m=strlen(a);
    int n=strlen(b);
    int f1=0;
    int index;
    for(int i=0;i<=m-n;i++)
    {  
        if(b[0]==a[i])
        {
        int f=1;

            for(int j=0;j<n;j++)
            {
                if(b[j]!=a[i+j])
                {
                    f=0;
                    break;
                }

            }
            
        
        if(f==1)
            {
                f1=1;
                index =i;
                break;
        
            }
        
    }
    }
    if(f1==1)
        {
             printf("found at %d",index);

        }
        else
        {
            printf("not found");
        }
}

