 #include<stdio.h>
 #include<limits.h>
 //int freq[]={8,2,4};
 int sum(int freq[],int i,int j);

 int obst(int freq[],int i,int j)
 {
    if(i > j) {
        return 0;
    }

     if(i==j)
     {
       return freq[i];
     }

     int min=INT_MAX;
     for(int k=i;k<=j;k++)
     {
        int val=obst(freq,i,k-1)+obst(freq,k+1,j)+sum(freq,i,j);
        
        if(val<min)
        {
            min=val;
        }
     }
     return min;
 }

 int sum(int freq[],int i,int j)
 {
    int s=0;

    for(int k=i;k<=j;k++)
    {
        s=s+freq[k];
    }
      return s;
 }

 int main()
 {
    int n;
    printf("enter the n:");
    scanf("%d",&n);
    int freq[n];
    printf("enter the elements:");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&freq[i]);
    }
    
    
    //int n=sizeof(freq)/sizeof(freq[0]);
    int p=obst(freq,0,n-1);
    printf(" optimal solution %d",p);
 }
