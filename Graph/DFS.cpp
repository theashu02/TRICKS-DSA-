#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> res;

    void dfs(int u, vector<int> adj[], vector<bool>& vis) {
        vis[u] = true;
        res.push_back(u);

        for (auto v : adj[u]) {
            if (!vis[v]) {
                dfs(v, adj, vis);
            }
        }
    }

    vector<int> DFS(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);  

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                dfs(i, adj, visited);
            }
        }

        return res; 
    }
};

int main() {
    int V = 5;
    vector<int> adj[V];

    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[3].push_back(4);

    Solution obj;
    vector<int> result = obj.DFS(V, adj);

    // Print the DFS traversal result
    for (int node : result) {
        cout << node << " ";
    }

    return 0;
}
