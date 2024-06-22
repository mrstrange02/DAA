#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
      printf("enter the string: ");
      gets(a);
      printf("enter the substring");
      gets(b);
    int m=strlen(a);
    int n=strlen(b);
      int temp=0;
      for(int i=n-1;i>=0;i--)
      {
           c[temp]=b[i];
           temp++;
      }
    
      //printf("%s",c);

      int f1=0;
      int index;
      for(int i=0;i<=m-n;i++)
      {
         if(c[0]==a[i])
         {
            int f=1;
            for(int j=0;j<n;j++)
            {
                if(c[j]!=a[i+j])
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