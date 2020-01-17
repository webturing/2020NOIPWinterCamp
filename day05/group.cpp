#include<bits/stdc++.h>
using namespace std;
int U[110], V[110], W[110];
int Next[110], First[110];

int n, m;

void addedge(int i)
{
    Next[i] = First[U[i]];
    First[U[i]] = i;
}

int main()
{
    freopen("te.in", "r", stdin);
    cin >> n >> m;
    memset(First, -1, sizeof(First));
    memset(Next, -1, sizeof(Next));
    for (int i = 1;i <= m;i++)
    {
        cin >> U[i] >> V[i] >> W[i];
        addedge(i);
    }
    for (int i = 1;i <= n;i++)
    {
        cout << i << ": \n";
        for (int e = First[i];e != -1;e = Next[e])
            cout << U[e] << ' ' << V[e] << endl;
    }

    return 0;
}
