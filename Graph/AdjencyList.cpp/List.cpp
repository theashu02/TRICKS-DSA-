#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
vector<int> graph[N]; // if edges is not given
vector<pair<int,int>> graphEgde[N];

class Solution
{
public:
    void solve()
    {
        int vertex, edges;
        cin >> vertex >> edges;

        for (int i = 0; i < edges; i++)
        {
            int v1, v2;
            cin >> v1 >> v2;
            graph[v1].push_back(v2);
            graph[v2].push_back(v1);
            // when the weigh is given between the two vertices
            graphEgde[v1].push_back({v2, weight});
            graphEgde[v2].push_back({v1, weight});
        }

        for (int i = 1; i <= vertex; i++)
        {
            cout << "Vertex " << i << ": ";
            for (int j : graph[i])
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Solution obj;
    obj.solve();
    return 0;
}
