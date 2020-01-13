#include <iostream>
#include <algorithm>

using namespace std;
//深入理解划分算法
int main()
{

    int a[10] = {6, 1, 2, 7, 9, 3, 4, 5, 10,8};
    int n = 10, k = 0, piv = a[k];
    int i = k + 1, j = n - 1;

    while (i < j)
    {
        while (a[j] >=piv&&i<j)
            j--;
        while (a[i] <= piv&&i<j)
            i++;
        if(i>=j)break;
        swap(a[i], a[j]);

    }
    swap(a[k], a[i]);
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
