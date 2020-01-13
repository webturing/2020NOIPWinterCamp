#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
//选择最小值和第一个元素交换O(n*(n-1)/2)=O(n^2)
int main()
{
    freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for(int i=0; i<n; i++)
    {
        int k=i;//最小值的下标
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[k])
                k=j;
        }
        swap(a[k],a[i]);
    }



    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
/**
 Input:
 10
 1 3 5 7 9 2 4 6 8 0

 Output:
 0 1 2 3 4 5 6 7 8 9
 *
 */



