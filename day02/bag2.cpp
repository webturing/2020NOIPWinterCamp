#include<bits/stdc++.h>
using namespace std;

int dp[20010];
int w[100],v[100];
int n, m;

int main()
{
    //freopen("test.in.c", "r", stdin);
    while(cin >> m >> n)
    {
        for (int i = 1;i <= n;i++)
            cin >> v[i] >> w[i];
        memset(dp, 0x3f3f3f3f, sizeof(dp));
        dp[0] = 0;
        for (int i = 1;i <= n;i++)
        {
            for (int j = 1;j <= w[i];j++)
                for (int k = m;k >= v[i];k--)
                {
                    dp[k] = min(dp[k], dp[k-v[i]]+1);
                }
        }
        if (dp[m] != 0x3f3f3f3f)
            cout << dp[m] << endl;
        else
            cout << "><" << endl;
    }

    return 0;
}
