#include<iostream>
#include<memory.h>
using namespace std;
const int maxn = 100+10;
int map[maxn][maxn];
int vis[maxn];
int n,p,c;
void Input()
{
    int l,r,leng;
    cin>>n>>p>>c;
    for (int i = 1;i<=p;i++)
        for (int j = 1;j<=p;j++)
            if (i==j)
                map[i][j] = 0;
            else
                map[i][j] = 999;
    for (int i = 1;i<=n;i++)
        cin>>vis[i];
    for (int i = 0;i<c;i++)
    {
        cin>>l>>r>>leng;
        map[l][r] = leng;
        map[r][l] = leng;
    }
}
void Floyd()
{
    for (int i = 1;i<=p;i++)
        for (int j = 1;j<=p;j++)
            for (int k = 1;k<=p;k++)
                if (map[j][i]+map[i][k] < map[j][k])
                    map[j][k] = map[j][i] + map[i][k];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Input();
        Floyd();
        int sum = 999999;
        for (int i = 1;i<=p;i++)
        {
            int now = 0;
            for (int j = 1;j<=n;j++)
                now += map[vis[j]][i];
            sum = min(now,sum);
        }
        cout<<sum<<endl;
    }
    return 0;
}
