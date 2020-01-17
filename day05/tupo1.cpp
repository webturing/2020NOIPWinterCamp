#include <iostream>
#include <memory.h>
#include <string>
#include <istream>
#include <sstream>
#include <vector>
#include <stack>
#include <algorithm>
#include <map>
#include <queue>
#include <math.h>
#include <cstdio>
#include <set>
#include <iterator>
#include <cstring>
using namespace std;
typedef long long LL;
const int MAXN = 500+10;
vector<int> G[MAXN];
vector<int> res;
int dis[MAXN];
int n, m;
void Tupo()
{
    priority_queue<int, vector<int>, greater<int> > que;
    for (int i = 1;i <= n;i++)
        if (dis[i] == 0)
        {
            //cout << i << endl;
            que.push(i);
        }
    while(!que.empty())
    {
        int u = que.top();
        que.pop();
        cout << u << endl;
        res.push_back(u);
        for (auto v:G[u])
            if (--dis[v] == 0)
                que.push(v);
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while (cin >> n >> m)
    {
        int l, r;
        for (int i = 1;i <= n;i++)
            G[i].clear();
        res.clear();
        memset(dis, 0, sizeof(dis));
        for (int i = 1;i <= m;i++)
        {
            cin >> l >> r;
            dis[r]++;
            G[l].push_back(r);
        }
        Tupo();
        for (auto x:res)
            cout << x << ' ' ;
        cout << endl;
    }
    return 0;
}
