#include<bits/stdc++.h>
using namespace std;

int n;
int heap[1010], a[1010];

void updatedown(int x)
{
    if (x > n)
        return;
    int p = x;
    int l = 2*x, r = 2*x+1;
    if (l <= n && heap[l] < heap[p])
        p = l;
    if (r <= n && heap[r] < heap[p])
        p = r;
    swap(heap[p], heap[x]);
    if (p != x)
        updatedown(p);
    return;
}


void build()
{
    for (int i = n/2;i >= 1;i--)
        updatedown(i);
}

int main()
{
    srand(time(0));
    n = 10;
    for (int i = 1;i <= n;i++)
        heap[i] = n-i+1;
    for (int i = 1;i <= n;i++)
        cout << heap[i] << ' ';
    cout << endl;
    build();
    for (int i = 1;i <= n;i++)
        cout << heap[i] << ' ';
    cout << endl;
    while(n)
    {
        cout << heap[1] << endl;
        heap[1] = heap[n];
        n--;
        updatedown(1);
    }

    return 0;
}
