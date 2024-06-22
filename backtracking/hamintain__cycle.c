#include<stdio.h>
int a[10];
int adj[10][10];

int issafe(int k,int i,int n )
{
    for(int j=0;j<k;j++)
    {
        if(a[j]==i)
            return 0;
        if(adj[a[k-1]][i]!=1)
        return 0;
        if(k==n-1 && adj[i][a[0]]!=1)
        return 0;
    }
    return 1;
}



void hc(int n, int k)
 {
    
    if (k == n)
     {
        for (int i = 0; i < n; i++) 
        {
            printf("%d ", a[i]);
        }

        printf("\n");
        return;
    }

    for (int i = 0; i < n; i++) 
    {
        if (issafe(k,i,n)) 
        {
            a[k] = i;
            hc(n, k + 1);
        }
    }
}

int main()
{
    int n;
    printf("enter the n");
    scanf("%d",&n);
    printf("enter the adjcent matrix: ");
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&adj[i][j]);
        }

    }
    printf("hamiltain cycle\n");
    hc(n,0);
}