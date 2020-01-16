#include<bits/stdc++.h>
using namespace std;
int Next[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

struct Node
{
    int x;
    int y;
    int step;
}que[100*100+10];
int head, tail;
int sx, sy, ex, ey;
int n, m;

int G[110][110], vis[110][110];

int bfs(int x, int y)
{
    memset(vis, 0, sizeof(vis));
    head = 1, tail = 1;
    que[tail].x = x;
    que[tail].y = y;
    que[tail].step = 0;
    tail++;
    vis[x][y] = 1;
    while(head < tail)
    {
        Node now = que[head];
        head++;
        if (now.x == ex && now.y == ey)
            return now.step;
        for (int i = 0;i < 4;i++)
        {
            int tx = now.x + Next[i][0];
            int ty = now.y + Next[i][1];
            if (tx < 1 || tx > n || ty < 1 || ty > m)
                continue;
            if (vis[tx][ty] == 1 || G[tx][ty] == 1)
                continue;
            vis[tx][ty] = 1;
            que[tail].x = tx;
            que[tail].y = ty;
            que[tail].step = now.step+1;
            tail++;
        }
    }
    return -1;
}

int main()
{
    //freopen("test.in", "r", stdin);
    while(cin >> n >> m)
    {
        for (int i = 1;i <= n;i++)
        {
            for (int j = 1;j <= m;j++)
                cin >> G[i][j];
        }
        cin >> sx >> sy >> ex >> ey;
        int ans = bfs(sx, sy);
        if (ans == -1)
            cout << "No Way!" << endl;
        else
            cout << ans << endl;
    }

    return 0;
}
