#include <stdio.h>
#include <limits.h>

int adj[10][10] = {
    {0, 2, -1, -1, -1, 8},
    {2, 0, 9, -1, 7, 4},
    {-1, 9, 0, 3, -1, 2},
    {-1, -1, 3, 0, 4, -1},
    {-1, 2, -1, 4, 0, 3},
    {8, 4, 2, -1, 3, 0}
};
int v[10];  // Visited array
int p[10];  // Parent array
int c[10];  // Cost array

int findmin(int v[], int c[], int n)
 {
    int min = INT_MAX, index = 0;
    for (int i = 0; i < n; i++)
     {
        if (v[i] == 0 && c[i] < min)
         { 
            min = c[i];
            index = i;
        }
    }
    return index;
}

void prim(int p[], int v[], int c[], int n) 
{
    for (int i = 0; i < n; i++)
     {
        c[i] = INT_MAX;  // Initialize cost array with infinity
        v[i] = 0;        // Initialize visited array with 0
    }
    
    c[0] = 0;  // Start from the first node (source)
   // p[0] = -1; // The first node is always the root of the MST

    for (int k = 0; k < n - 1; k++)
     {
        int i = findmin(v, c, n);
        v[i] = 1;  // Mark node as visited
        for (int j = 0; j < n; j++) 
        {
            if (adj[i][j] != -1 && v[j] == 0 && adj[i][j] < c[j])
             {  // Check for an edge, unvisited node, and minimum cost
                c[j] = adj[i][j];
                p[j] = i;
            }
        }
    }
}

int main() {
    int n = 6;
    
    

    prim(p, v, c, n);

    printf("Edge   Weight\n");
    for (int i = 1; i < n; i++) {
        printf("%d - %d    %d\n", p[i], i, adj[i][p[i]]);
    }

    return 0;
}

