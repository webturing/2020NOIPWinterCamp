#include<bits/stdc++.h>
using namespace std;

int f[110][100];
int a[110][110];
int n;

int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= i;j++)
            cin >> a[i][j];
    }
    f[1][1] = a[1][1];
    for (int i = 2;i <= n;i++)
    {
        f[i][1] = a[i][1]+f[i-1][1];
        f[i][i] = a[i][i]+f[i-1][i-1];
        for (int j = 2;j < i;j++)
            f[i][j] = a[i][j]+max(f[i-1][j], f[i-1][j-1]);
    }
    int ans = 0;
    for (int i = 1;i <= n;i++)
        ans = max(ans, f[n][i]);
    cout << ans << endl;

    return 0;
}
