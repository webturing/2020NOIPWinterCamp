#include <iostream>
#include <algorithm>

using namespace std;

//重点理解有序列表的合并算法
void merge_sort(int *a, int left, int right, int *buffer) {
    if (left >= right)
        return;
    int mid = (left + right) / 2;
    merge_sort(a, left, mid, buffer);
    merge_sort(a, mid + 1, right, buffer);
    int k = left, i = left, j = mid + 1;
    while (i <= mid && j <= right) {
        if (a[i] <= a[j]) {
            buffer[k++] = a[i++];
        } else {
            buffer[k++] = a[j++];
        }
    }
    while (i <= mid) {
        buffer[k++] = a[i++];
    }
    while (j <= right) {
        buffer[k++] = a[j++];
    }
    for (int i = left; i <= right; i++)
        a[i] = buffer[i];
}

int main() {
    int a[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    int buffer[10];

    merge_sort(a, 0, 9, buffer);

    for (int i = 0; i < 10; i++) {
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
