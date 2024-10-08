// Time Complexity: O(V + E)
// Space Complexity: O(V)
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool dfs(int u, int par, vector<int>adj[], vector<bool>&vis){
		vis[u] = true;    //marking the current vertex as visited.
		
		for(auto v: adj[u]){    //iterating on all the adjacent vertices.
			if(v == par) continue;
				
			//if current vertex is visited, we return true else we call the function recursively to detect the cycle.
			
			if(vis[v]) return true;
			if(dfs(v, u, adj, vis))
				return true;
		}
		return false;
	}
	
	
	bool isCycle(int V, vector<int> adj[]){
		vector<bool>visited(V, false);
		for(int i = 0; i < V; i++){
		    //if vertex is not visited, we call the function to detect cycle.
			if(!visited[i]){
				bool cycle = dfs(i, -1, adj, visited);
				if(cycle) return true;
			}
		}
		return false;
	}
};