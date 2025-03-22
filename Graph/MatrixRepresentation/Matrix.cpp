#include<bits/stdc++.h>
using namespace std;

int N = 1e3;
int graph[N][N];

class Solution {
    public:
    void solve(){
        int vertices,edges;
        cin>>vertices>>edges;
        
        for(int i=0;i<edges;i++){
            int v1, v2;
            cin>>v1>>v2;
            graph[v1][v2] = 1;
            graph[v2][v1] = 1;
        }

        for(int i=0;i<vertices;i++){
            for(int j=0;j<vertices;j++){
                cout<<graph[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Solution obj;
    obj.solve();
    return 0;
}
