#include<iostream>

using namespace std;

int data[10000], head = 0, tail = -1;//队列的定义和初始化，data[head:tail]这一段是队列的有效元素

int main() {
    cout << "queue empty?" << (head > tail) << endl;//stack empty空栈判断
    cout << "queue size=" << (tail - head + 1) << endl;//stack size栈的容量
    cout << "queue top=" << data[head] << endl;//queue front队首元素
    cout << "queue top=" << data[head] << endl;//queue队头元素
    data[++tail] = 1;//元素入栈
    ++head;//元素出队

    for (int i = 0; i < 10; i++) {
        data[++tail] = i;
    }
    while (head <= tail) {
        cout << data[head++] << endl;
    }


}


