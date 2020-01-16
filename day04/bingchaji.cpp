#include<bits/stdc++.h>
using namespace std;

int f[100];

int GetF(int x)
{
    if (f[x] == x)
        return x;
    f[x] = GetF(f[x]);
    return f[x];
}

int main()
{
    for (int i = 1;i <= 10;i++)
        f[i] = i;

    return 0;
}
