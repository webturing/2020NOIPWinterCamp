#include<iostream>

using namespace std;

int data[10000], head = 0, tail = -1;//队列的定义和初始化，data[head:tail]这一段是队列的有效元素

int main() {
    cout << "queue empty?" << (head > tail) << endl;//stack empty空栈判断
    cout << "queue size=" << (tail - head + 1) << endl;//stack size栈的容量
    cout << "queue head=" << data[head] << endl;//queue front队首元素
    cout << "queue tail=" << data[tail] << endl;//queue队尾元素
    data[++tail] = 1;//元素入队
    ++head;//元素出队

    int a[9] = {6, 3, 1, 7, 5, 8, 9, 2, 4};
    for (int i = 0; i < 9; i++)data[++tail] = a[i];

    while (head <= tail) {
        int x = data[head];
        cout << x << " ";
        ++head;
        if (head > tail)break;
        int y = data[head++];
        data[++tail] = y;


    }


}


