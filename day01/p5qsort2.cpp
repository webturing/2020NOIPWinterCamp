#include <iostream>
#include <algorithm>

using namespace std;

void quick_sort(int *a, int left, int right) {
    if (left >= right)return;
    int mid = (right + left) / 2;
    int piv = a[left];
    int i = left, j = right;
    while (i < j) {
        while (j > i && a[j] >= piv)--j;
        while (j > i && a[i] <= piv)++i;
        swap(a[i], a[j]);
    }
    swap(a[left], a[i]);
    quick_sort(a, left, mid);
    quick_sort(a, mid + 1, right);

}

int main() {

    int a[] = {6, 1, 2, 7, 9, 3, 4, 5, 10, 8};
    int n = sizeof(a) / sizeof(a[0]);
    quick_sort(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
