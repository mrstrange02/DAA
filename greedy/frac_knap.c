#include <stdio.h>

// Function to sort items based on their value-to-weight ratio
void sort_items(int wt[], int val[], int n) 
{
    for (int i = 0; i < n-1; ++i)
     {
        for (int j = 0; j < n-i-1; ++j) 
        {
            if ((float)val[j] / wt[j] < (float)val[j+1] / wt[j+1])
             {
                int temp = val[j];
                 val[j] = val[j+1]; 
                 val[j+1] = temp;
                 
                 
                temp = wt[j]; 
                wt[j] = wt[j+1];
                 wt[j+1] = temp;
            }
        }
    }
}

float frac_knap(int wt[], int val[], int n, int W)
 {
    float total_value = 0.0;
    
    sort_items(wt, val, n);
    
    for (int i = 0; i < n && W > 0; ++i)
     {
        if (wt[i] <= W)
         {
            total_value += val[i];
            W -= wt[i];
        } else {
            total_value += (float)val[i] * W / wt[i];
            W = 0;
        }
    }
    return total_value;
}

int main() {
    int n, w;
    printf("Enter the number of items: ");
    scanf("%d", &n);
    printf("Enter the bag weight: ");
    scanf("%d", &w);

    int wt[n], val[n];
    printf("Enter the weights: ");
    for (int i = 0; i < n; ++i) scanf("%d", &wt[i]);

    printf("Enter the values: ");
    for (int i = 0; i < n; ++i) scanf("%d", &val[i]);

    printf("Maximum value obtainable = %.2f\n", frac_knap(wt, val, n, w));
    return 0;
}

