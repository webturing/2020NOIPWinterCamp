#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>

using namespace std;
const int maxn = 1000000 + 50;
int a[maxn];

bool Cmp(int x, int y) {
    return x % 5 > y % 5;
}

int main() {
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)cin >> a[i];

    sort(a, a + n, Cmp);
    //reverse(a,a+n);

    for (int i = 0; i < n; i++) {
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



