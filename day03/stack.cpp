#include<iostream>

using namespace std;
int data[100], top = -1;//栈的定义和初始化

int main() {
    cout << "stack empty?" << (top == -1) << endl;//stack empty空栈判断
    cout << "stack size=" << (top + 1) << endl;//stack size栈的容量
    cout << "stack top=" << data[top] << endl;//stack top栈顶元素
    data[++top] = 1;//元素入栈
    --top;//元素出栈



    for (int i = 0; i < 10; i++) {
        data[++top] = i;
    }
    while (top >= 0) {
        cout << data[top--] << endl;
    }
    return 0;

}