#include <stdio.h>
#include <limits.h>



int adj[10][10] = {
    {0, 2, -1, -1, -1, 8},
    {2, 0, 9, -1, 7, 4},
    {-1, 9, 0, 3, -1, 2},
    {-1, -1, 3, 0, 4, -1},
    {-1, 7, -1, 4, 0, 3},
    {8, 4, 2, -1, 3, 0}
};

int visited[10] = {0}, parent[10], n = 6;

void prim() {
    int k = n;
    visited[0] = 1;
    while (k > 1) {
        int min = INT_MAX, u = -1, v = -1;
        for (int i = 0; i < n; i++) {
            if (visited[i] == 1) {
                for (int j = 0; j < n; j++) {
                    if (adj[i][j] != -1 && visited[j] == 0) {
                        if (adj[i][j] < min) {
                            min = adj[i][j];
                            u = i;
                            v = j;
                        }
                    }
                }
            }
        }
        if (v != -1) {
            visited[v] = 1;
            parent[v] = u;
            k--;
        }
    }
}

int main() {
    prim();
    printf("Edge \tWeight\n");
    for (int i = 1; i < n; i++)
        printf("%d - %d \t%d\n", parent[i], i, adj[i][parent[i]]);
    return 0;
}

