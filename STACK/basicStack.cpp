#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    // Push
    st.push(8);
    st.push(4);
    st.push(7);
    st.push(1);
    st.push(9);

    cout << "Top Element : " << st.top() << endl;
    cout << "Size : " << st.size() << endl;

    // Pop
    st.pop();

    cout << "\nAfter pop()" << endl;
    cout << "Top Element : " << st.top() << endl;
    cout << "Size : " << st.size() << endl;

    // Empty
    if (st.empty()) {
        cout << "Stack is Empty" << endl;
    } else {
        cout << "Stack is Not Empty" << endl;
    }

    // Print all elements
    cout << "\nStack Elements : ";

    stack<int> temp = st;   // Original stack ki copy

    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }

    cout << endl;

    // Clear the stack
    while (!st.empty()) {
        st.pop();
    }

    cout << "\nAfter clearing stack" << endl;

    if (st.empty()) {
        cout << "Stack is Empty" << endl;
    }

    cout << "Size : " << st.size() << endl;

    return 0;
}