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

void bfs(int x, int y)
{
    head = 1, tail = 1;
    que[head].x = x;
    que[head].y = y;
    tail++;
    vis[x][y] = 1;
    while(head < tail)
    {
        Node now = que[head];
        head++;
        for (int i = 0;i < 4;i++)
        {
            int tx = now.x+Next[i][0];
            int ty = now.y+Next[i][1];
            if (tx < 1 || tx > n || ty < 1 || ty > m)
                continue;
            if (vis[tx][ty] == 1 || G[tx][ty] == 0)
                continue;
            que[tail].x = tx;
            que[tail].y = ty;
            vis[tx][ty] = 1;
            tail++;
        }
    }
}

int main()
{
    freopen("test.in", "r", stdin);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >>m;

        for (int i = 1;i <= n;i++)
        {
            for (int j = 1;j <= m;j++)
                cin >> G[i][j];
        }
        int cnt = 0;
        for (int i = 1;i <= n;i++)
        {
            for (int j = 1;j <= m;j++)
            {
                if (vis[i][j] == 0 && G[i][j])
                {
                    cnt++;
                    bfs(i, j);
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
