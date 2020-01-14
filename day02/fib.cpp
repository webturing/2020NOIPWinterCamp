#include<bits/stdc++.h>
using namespace std;

int f[100000];

int fib(int x)
{
    if (f[x] != -1)
        return f[x];
    if (x == 1)
        return 1;
    if (x == 2)
        return 1;
    return f[x] = fib(x-1)+fib(x-2);
}

int main()
{
    memset(f, -1, sizeof(f));
    cout << fib(1000) << endl;

    return 0;
}
