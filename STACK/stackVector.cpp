#include <iostream>
#include <vector>
using namespace std;

class Stack {
    vector<int> v;

public:

    // Push
    void push(int x) {
        v.push_back(x);
    }

    // Pop
    void pop() {
        if (v.empty()) {
            cout << "Stack Underflow" << endl;
            return;
        }

        v.pop_back();
    }

    // Top
    int Top() {
        if (v.empty()) {
            cout << "Stack is Empty" << endl;
            return -1;
        }

        return v.back();
    }

    // Empty
    bool empty() {
        return v.empty();
    }

    // Size
    int size() {
        return v.size();
    }

    // Display
    void display() {
        if (v.empty()) {
            cout << "Stack is Empty" << endl;
            return;
        }

        cout << "Stack Elements : ";

        for (int i = v.size() - 1; i >= 0; i--) {
            cout << v[i] << " ";
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