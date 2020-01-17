#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int G[10][10];
int n, m;

int main()
{
    freopen("te.in", "r", stdin);
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
    {
        for (int j = 1;j <= n;j++)
            cout << G[i][j] << ' ';
        cout << endl;
    }
    for (int k = 1;k <= n;k++)
    {
        for (int i = 1;i <= n;i++)
        {
            for (int j = 1;j <= n;j++)
                G[i][j] = min(G[i][j], G[i][k]+G[k][j]);
        }
    }
        for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= n;j++)
            cout << G[i][j] << ' ';
        cout << endl;
    }

    return 0;
}
