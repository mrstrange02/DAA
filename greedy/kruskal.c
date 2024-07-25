#include <stdio.h>
#include <stdlib.h>
#include<limits.h>



int adj[4][4] = {
        {-1, 2, 3, 4},
        {2, -1, 5, 6},
        {3, 5, -1, 7},
        {4, 6, 7, -1}
        
    }; 
   
int parent[100];   // Array to store parent nodes in the MST
int p1, p2;        // To store the selected edge
int value = 0;     // Total cost of the MST

void find_edge(int n);
int find_parent(int n);
void kruskal(int n);

int main()
 {
    int n = 4; 

    for (int i = 0; i < n; i++)
     {
        parent[i] = i;
    }
    
    kruskal(n);

    return 0;
}


void kruskal(int n) 
{
    int k = 0;
    while (k < n - 1)
     {
        find_edge(n);
        if (p1 == -1 || p2 == -1)
         {
            printf("No valid edge found. MST cannot be completed.\n");
            return;
        }
        
        int pu = find_parent(p1);
        int pv = find_parent(p2);
        if (pu != pv) 
        {
            value += adj[p1][p2];
            parent[pu] = pv;
            k++;
        }
        
        adj[p1][p2] = adj[p2][p1] = -1; // Remove the selected edge
    }
    printf("Total value of MST: %d\n", value);
}

void find_edge(int n) 
{
    int min = INT_MAX;
    p1 = -1;
    p2 = -1;
    for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < n; j++) 
        {
            if (adj[i][j] != -1 && adj[i][j] < min)
             {
                p1 = i;
                p2 = j;
                min = adj[i][j];
            }
        }
    }
    printf("Selected edge (%d, %d) with weight %d\n", p1, p2, min);
}

int find_parent(int n)
 {
    if (n == parent[n])
     {
        return n;
    }
    return parent[n] = find_parent(parent[n]); // Path compression
}

