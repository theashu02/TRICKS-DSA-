#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
const int INF = 1e9;
vector<pair<int,int>> graph[N];
vector<int> dis(N,INF);


void BFS(int source){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    dis[source] = 0;
    pq.push({0, source});

    while(!pq.empty()){
        int currdis = pq.top().first;
        int currnode = pq.top().second;
        pq.pop();
        
        for(auto i:graph[currnode]){
            int child = i.first;
            int wt = i.second;

            if(dis[currnode] + wt < dis[child]){
                dis[child] = dis[currnode] + wt;
                pq.push({dis[child], child});
            }
        }
    }
}


int main(){
    int vertex, edge;
    cin>>vertex>>edge;

    for(int i=0;i<edge;i++){
        int a,b,wt;
        cin>>a>>b>>wt;
        graph[a].push_back({b,wt});
    }

    int source;
    cin>>source;

    BFS(source);
    int maxi = -1;
    for(int i=0;i<vertex;i++){
        if(dis[i]==INF) cout<<-1<<endl;
        maxi = max(maxi, dis[i]);
    }
    cout<<maxi<<endl;
}
