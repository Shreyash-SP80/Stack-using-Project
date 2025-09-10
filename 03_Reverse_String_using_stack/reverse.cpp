#include<iostream>
#include<string>
using namespace std;

class stack {
    int *arr;
    int top;
    int size;
    public:
        stack(int size) {
            arr = new int[size];
            this->size = size;
            top = -1;
        }

        void push(int ele) {
            if (size - top > 1) {
                arr[++top] = ele;
            } else {
                cout << "Stack overflows.." << endl;
            }
        }

        void pop() {
            if (top >= 0) {
                top--;
            } else {
                cout << "Stack underflows.." << endl;
            }
        }

        int head() {
            if (top >= 0) {
                return arr[top];
            } else {
                return 0;
            }
        }

        int isempty() {
            if (top == -1) {
                return 1;
            } else {
                return 0;
            }
        }
};


int  main() {
    string input;

    stack st(50);

    cout << "Enter any string: ";
    getline(cin, input);

    int i = 0;
    for (char ch: input) {
        st.push(ch);
    }

    string result;
    while (!st.isempty()) {
        result += st.head();
        st.pop();
    }

    cout << "Reversed String: " << result << endl;
    return 0;
}