#include<bits/stdc++.h>
using namespace std;

int dp[1000010];
int a[5] = {1, 2, 4, 5, 10};
int n;

int main()
{
    memset(dp, 0x3f3f3f3f, sizeof(dp));
    for (int i = 1;i <= 10;i++)
        cout << dp[i] << endl;
    cin >> n;
    dp[0] = 0;
    for (int i = 0;i < 5;i++)
    {
        for (int j = a[i];j <= n;j++)
        {
            dp[j] = min(dp[j], dp[j-a[i]]+1);
        }
    }
    cout << dp[n] << endl;

    return 0;
}
