#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> res;
    
    void bfs(vector<int> adj[], vector<bool>& vis, int u) {
        queue<int> q;
        q.push(u);
        vis[u] = true;

        while (!q.empty()) {
            int v = q.front();
            q.pop();
            res.push_back(v);

            for (auto i : adj[v]) {
                if (!vis[i]) {
                    vis[i] = true;
                    q.push(i);
                }
            }
        }
    }

    vector<int> BFS(int V, vector<int> adj[]) {
        vector<bool> vis(V, false); 

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                bfs(adj, vis, i); 
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
    adj[2].push_back(4);

    Solution obj;
    vector<int> result = obj.BFS(V, adj);

    // Print the BFS traversal result
    for (int node : result) {
        cout << node << " ";
    }

    return 0;
}
