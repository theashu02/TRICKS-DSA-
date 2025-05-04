#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
const int INF = 1e9+10;
vector<pair<int,int>> graph[N];
vector<int> level(N,INF);

int BFS(){
    deque<int> q;
    q.push_back(1);
    level[1] = 0;

    while (!q.empty())
    {
        int curr = q.front();
        q.pop_front();
        for(auto i:graph[curr]){
            int child_node = i.first;
            int edge_weight = i.second;
            if (level[curr] + edge_weight < level[child_node]){
                level[child_node] = level[curr] + edge_weight;
                if(edge_weight == 1){
                    q.push_back(child_node);
                }
                else{
                    q.push_front(child_node);
                }
            }
        }
    }

    return level[N] == INF ? -1 : level[N];
    
}

int main(){
    int vertex, edges;
    cin>>vertex>>edges;
    for(int i=0;i<edges;i++){
        int a, b;
        if(a==b) continue;
        graph[a].push_back({b, 0});
        graph[b].push_back({a, 1});
    }
    cout<<BFS()<<endl;

    return 0;
}
