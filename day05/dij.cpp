#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int G[10][10];
int n, m;

int dis[10], vis[10];

void dij(int s)
{
    for (int i = 1;i <= n;i++)
        dis[i] = G[s][i];
    memset(vis, 0, sizeof(vis));
    vis[s] = 1;
    for (int i = 1;i <= n;i++)
    {
        int p = -1, w = INF;
        for (int j = 1;j <= n;j++)
        {
            if (dis[j] < w && vis[j] == 0)
            {
                p = j;
                w = dis[j];
            }
        }
        vis[p] = 1;
        if (p == -1)
            break;
        for (int j = 1;j <= n;j++)
        {
            if (vis[j] == 0 && dis[p]+G[p][j] < dis[j])
                dis[j] = dis[p]+G[p][j];
        }
    }
}

int main()
{
    freopen("dij.in", "r", stdin);
    cin >> n >> m;
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= n;j++)
        {
            if (i == j) G[i][j] = 0;
            else G[i][j] = INF;
        }
    }
    for (int i = 1;i <= m;i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        G[u][v] = w;
    }
    dij(1);
    for (int i = 1;i <= n;i++)
        cout << dis[i] << ' ' ;
    cout << endl;

    return 0;
}
