#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool BFS(vector<int> adj[], vector<bool>& vis, int parent, int u) {
        queue<pair<int, int>> q;
        q.push({u, parent});   
        vis[u] = true;

        while (!q.empty()) {
            int v = q.front().first;
            int par = q.front().second;
            q.pop();

            for (auto i : adj[v]) {
                if (i == par) continue;

                if (vis[i]) {
                    return true;
                }

                vis[i] = true;
                q.push({i, v});
            }
        }
        return false;
    }

    bool isCycle(int V, vector<int> adj[]) {
        vector<bool> vis(V, false);
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                
                if (BFS(adj, vis, -1, i)) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    int V = 5; 
    vector<int> adj[V];

    // Example graph (add edges)
    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[0].push_back(2);
    adj[2].push_back(0);
    adj[1].push_back(3);
    adj[2].push_back(4);

    Solution obj;
    bool hasCycle = obj.isCycle(V, adj);
    
    if (hasCycle) {
        cout << "Cycle detected in the graph." << endl;
    } else {
        cout << "No cycle in the graph." << endl;
    }

    return 0;
}
