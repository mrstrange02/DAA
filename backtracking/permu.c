#include<stdio.h>

int a[10];

int issafe(int k, int i) 
{
    for (int j = 0; j < k; j++) 
    {
        if (a[j] == i)
            return 0;
    }
    return 1;
    
}

void per(int n, int k)
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
        if (issafe(k, i)) 
        {
            a[k] = i;
            per(n, k + 1);
        }
    }
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);


    per(n, 0); // Start with k = 0
}