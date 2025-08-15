#include <iostream>
#include <vector>
using namespace std;


class  Stack {
    vector<int> arr;
    public:


        void push(int ele) {
            arr.push_back(ele);
            cout << ele << " is inserted" << endl;
        }

        void pop() {
            if (isEmpty()) {
                return;
            }
            arr.pop_back();
        }

        int front() {
            return arr.back();
            // Or
            // return arr[arr.size()-1];
        }

        bool isEmpty() {
            return arr.empty();
            // Or
            // return arr.size() == 0;
        }

        void display() {
            if (isEmpty()) {
                cout << "Stack is empty!" << endl;
                return;
            }
            cout << "Stack elements (top to bottom): ";
            for (int val : arr) {
                cout << val << " ";
            }
            cout << endl;
        }
};

int  main () {
    Stack s1;
    // s1.createStack(4);

    cout << (s1.isEmpty()? "Stack is empty": "Stack is not empty") << endl;
    s1.pop();
    s1.push(10);
    cout << (s1.isEmpty()? "Stack is empty": "Stack is not empty") << endl;
    s1.push(20);
    s1.push(30);
    s1.push(40);


    s1.push(30);

    s1.display();
    s1.pop();

    s1.display();
    cout << "Front element: " << s1.front() << endl;

    return 0;
}

// Output =>
// Stack is empty
// 10 is inserted
// Stack is not empty
// 20 is inserted
// 30 is inserted
// 40 is inserted
// 30 is inserted
// Stack elements (top to bottom): 10 20 30 40 30
// Stack elements (top to bottom): 10 20 30 40
// Front element: 40