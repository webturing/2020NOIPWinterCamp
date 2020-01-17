#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int u, v;
    int w;
}node[110];
int F[110];
int n, m;

int GetF(int x)
{
    ///F[x] != x// F[x] = y,, x->a->y
    ///F[x] != y// F[y] = y, F[a] = y, F[x] = a;
    ///F[a] != y, GetF(y) = F[y] = GetF(F[y] = a), GetF(a) -> a;
    ///F[y] = a;
    ///F[x] = GetF(F[x] = y) = a;
    if (F[x] == x)
        return x;
    F[x] = GetF(F[x]);
    return F[x];
}

///bool cmp(int a, int b);
bool cmp(Node a, Node b)
{
    return a.w < b.w;
}



int main()
{
    freopen("test.in", "r", stdin);
    cin >> n >> m;
    for (int i = 1;i <= n;i++) F[i] = i;
    for (int i = 1;i <= m;i++)
        cin >> node[i].u >> node[i].v >> node[i].w;
    sort(node+1, node+1+m, cmp);
    ///a[], 1 -> n
    ///1->n
    ///sort(1, n+1) (n+1)-1
    for (int i = 1;i <= m;i++)
        cout << node[i].u << ' ' << node[i].v << ' ' << node[i].w << endl;
    int sum = 0;
    for (int i = 1;i <= m;i++)
    {
        int tu = GetF(node[i].u);
        int tv = GetF(node[i].v);
        if (tu != tv)
        {
            F[tu] = tv;
            sum += node[i].w;
        }
    }
    cout << sum << endl;

    return 0;
}
