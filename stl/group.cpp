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
void debug(string s,int *a,int n)
{
    cout<<s<<":";
    for(int i=0; i<n; i++)
    {

        cout<<a[i]<<" ";

    }
    cout<<endl;
}
int main()
{
    freopen("te.txt", "r", stdin);
    cin >> n >> m;
     memset(First, -1, sizeof(First));

    memset(Next, -1, sizeof(Next));
    for (int i = 1; i <= m; i++)
    {
        cin >> U[i] >> V[i] >> W[i];
        addedge(i);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": \n";
        for (int e = First[i]; e != -1; e = Next[e])
            cout << U[e] << ' ' << V[e] << endl;
    }
    debug("First:",First+1,n);
    debug("Next:",Next+1,m);

    return 0;
}
