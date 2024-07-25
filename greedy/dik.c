#include <stdio.h>
#include <limits.h>


int adj[10][10];  
int v[10];        
int p[10];        
int c[10];         

int findmin(int v[], int c[], int n) 
{
    int min = INT_MAX, index = -1;
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



void dij(int p[], int v[], int c[], int n) 
{
    for (int i = 0; i < n; i++)
     {
        c[i] = INT_MAX;  // Initialize cost array with infinity
        v[i] = 0;        // Initialize visited array with 0
    }
    
    c[0] = 0;  // Start from the first node (source)

    for (int k = 0; k < n - 1; k++) 
    {
        int i = findmin(v, c, n);
        v[i] = 1;  // Mark node as visited
        for (int j = 0; j < n; j++)
         {
            if (adj[i][j] != -1 && v[j] == 0)
             {  // Check for an edge and unvisited node
                if (c[j] > c[i] + adj[i][j]) 
                {
                    c[j] = c[i] + adj[i][j];
                    p[j] = i;
                }
            }
        }
    }
}

int main() {
    int n = 6;

    int input[10][10] = {
       {0, 2 ,-1 ,-1 ,-1, 8},
       {2, 0, 9 ,-1, 7 ,4},
       {-1 ,9, 0, 3 ,-1 ,2},
      {-1 ,-1 ,3, 0, 4, -1},
       {-1, 2, -1 ,4, 0, 3},
       {8 ,4, 2, -1, 3 ,0}

    };

    // Copy input to adjacency matrix
    for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < n; j++) 
        {
            adj[i][j] = input[i][j];
        }
    }

    // Initialize the predecessor array
    for (int i = 0; i < n; i++)
     {
        p[i] = -1;
    }

    dij(p, v, c, n);

    printf("Shortest path costs from source node 0:\n");
    for (int i = 0; i < n; i++)
     {
        printf("Node %d: %d\n", i, c[i]);
    }

    return 0;
}

