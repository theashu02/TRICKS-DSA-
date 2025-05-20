#include <bits/stdc++.h>
using namespace std;     

class DSU {
    vector<int> parent;
    vector<int> rank;
    
public:
    DSU(int n) { 
        parent.resize(n);
        rank.resize(n);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            rank[i] = 1;
        }
    }

    int find(int x) {
        if (x != parent[x])
            parent[x] = find(parent[x]);
        return parent[x];
    }

    void Union(int x, int y) {
        int a = find(x);
        int b = find(y);

        if (a == b) return; 

        if (rank[a] < rank[b]) {
            parent[a] = b;
        } else if (rank[a] > rank[b]) {
            parent[b] = a;
        } else {
            parent[b] = a;
            rank[a]++;
        }
    }
};

int main() {
    int V;
    cin >> V;
    
    DSU dsu(V);
    
    vector<int> adj[V];

    for (int i = 0; i < V; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        dsu.Union(u, v);
    }
    
    return 0;
}
