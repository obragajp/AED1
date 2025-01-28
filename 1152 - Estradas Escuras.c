#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int u, v, weight;
} Edge;

int compareEdges(const void* a, const void* b) {
    return ((Edge*)a)->weight - ((Edge*)b)->weight;
}

int find(int *parent, int i) {
    if (parent[i] != i) {
        parent[i] = find(parent, parent[i]);
    }
    return parent[i];
}

void unionSets(int *parent, int *rank, int x, int y) {
    int rootX = find(parent, x);
    int rootY = find(parent, y);

    if (rootX != rootY) {
        if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
    }
}

int main() {
    int m, n;
        while (scanf("%d %d", &m, &n), m && n) {
        Edge edges[n];
        int totalCost = 0;
        int mstCost = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].weight);
            totalCost += edges[i].weight;
        }
        qsort(edges, n, sizeof(Edge), compareEdges);
        int parent[m], rank[m];
        for (int i = 0; i < m; i++) {
            parent[i] = i;
            rank[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            int u = edges[i].u;
            int v = edges[i].v;
            int weight = edges[i].weight;
            if (find(parent, u) != find(parent, v)) {
                unionSets(parent, rank, u, v);
                mstCost += weight;
            }
        }
        printf("%d\n", totalCost - mstCost);
    }
    return 0;
}
