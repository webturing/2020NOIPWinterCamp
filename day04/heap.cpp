#include<bits/stdc++.h>
using namespace std;

int n;
int heap[1010], a[1010];

void updatedown(int x)
{
    while(x <= n)
    {
        int l = x*2, r = x*2+1;
        int p = x;
        if (l <= n && heap[l] < heap[p])
            p = l;
        if (r <= n && heap[r] < heap[p])
            p = r;
        if (p != x)
        {
            swap(heap[p], heap[x]);
            if (p == x*2)
                x = x*2;
            else
                x = x*2+1;
        }
        else
            break;
    }
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
