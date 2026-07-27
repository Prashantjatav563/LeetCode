#include <iostream>
using namespace std;

class Stack {
    int arr[100];
    int top;

public:

    // Constructor
    Stack() {
        top = -1;
    }

    // Push
    void push(int x) {
        if (top == 99) {
            cout << "Stack Overflow" << endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    // Pop
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }

        top--;
    }

    // Top Element
    int Top() {
        if (top == -1) {
            cout << "Stack is Empty" << endl;
            return -1;
        }

        return arr[top];
    }

    // Empty
    bool empty() {
        return top == -1;
    }

    // Size
    int size() {
        return top + 1;
    }

    // Print Stack
    void display() {
        if (top == -1) {
            cout << "Stack is Empty" << endl;
            return;
        }

        cout << "Stack Elements : ";

        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {

    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.display();

    cout << "Top Element : " << st.Top() << endl;
    cout << "Size : " << st.size() << endl;

    st.pop();

    cout << "\nAfter Pop()" << endl;

    st.display();

    cout << "Top Element : " << st.Top() << endl;
    cout << "Size : " << st.size() << endl;

    if (st.empty()) {
        cout << "Stack is Empty" << endl;
    } else {
        cout << "Stack is Not Empty" << endl;
    }

    return 0;
}