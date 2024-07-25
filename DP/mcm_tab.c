#include <stdio.h>
#include <limits.h>

int dp[10][10];
int a[10];

int mcm(int n) 
{
    for (int k = 0; k <n; k++)
     {
        for (int i = 1; i <= n - k; i++)
         {
        
            int j = i + k;

            if (i == j) 
            {
                dp[i][j] = 0;
                continue;
            }

            int min = INT_MAX;
            for (int l = i; l < j; l++) 
            {
                int val = dp[i][l] + dp[l + 1][j] + a[i - 1] * a[l] * a[j];
                
                if (val < min) 
                {
                    min = val;
                }
            }

            dp[i][j] = min;
        }
    }

    return dp[1][n];
}

int main() {
    int n;
    printf("Enter the number of matrices: ");
    scanf("%d", &n);

    printf("Enter the dimensions: ");
    for (int i = 0; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    int num = mcm(n);
    printf("Minimum number of multiplications: %d\n", num);

    return 0;
}

