#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
const int INF = 1e9;

int dis[N][N];

int main() {
    int vertex, edge;
    cin >> vertex >> edge;

    // Initialize distances
    for (int i = 1; i <= vertex; i++) {
        for (int j = 1; j <= vertex; j++) {
            if (i == j)
                dis[i][j] = 0;
            else
                dis[i][j] = INF;
        }
    }

    for (int i = 0; i < edge; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        dis[a][b] = c;
    }

    // Floyd-Warshall algorithm
    for (int k = 1; k <= vertex; k++) {
        for (int i = 1; i <= vertex; i++) {
            for (int j = 1; j <= vertex; j++) {
                if (dis[i][k] < INF && dis[k][j] < INF)
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
            }
        }
    }

    // Optional: Print shortest distances
    /*
    for (int i = 1; i <= vertex; i++) {
        for (int j = 1; j <= vertex; j++) {
            if (dis[i][j] == INF) cout << "INF ";
            else cout << dis[i][j] << " ";
        }
        cout << endl;
    }
    */

    return 0;
}
