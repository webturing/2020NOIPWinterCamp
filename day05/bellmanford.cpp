#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int G[10][10];
int dis[10];
int n, m;

int main()
{
    freopen("bell.in", "r", stdin);
    cin >> n >> m;
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= n;j++)
        {
            if (i == j) G[i][j] = 0;
            else G[i][j] = INF;
        }
    }
    int u, v, w;
    for (int i = 1;i <= m;i++)
    {
        cin >> u >> v >> w;
        G[u][v] = w;
    }
    for (int i = 1;i <= n;i++)
        dis[i] = INF;
    dis[1] = 0;
    for (int k = 1;k <= n-1;k++)
    {
        for (int j = 1;j <= m;j++)
        {
            if (dis[v[j]] > dis[u[j]]+w[j])
                dis[v[j]] = dis[u[j]]+w[j];
        }
    }
    for (int i = 1;i <= n;i++)
        cout << dis[i] << ' ';
    cout << endl;

    return 0;
}
