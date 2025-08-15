#include <iostream>
#include <list>
using namespace std;


class  Stack {
    list<int> l1;
    public:


        void push(int ele) {
            l1.push_front(ele);
            cout << ele << " is inserted" << endl;
        }

        void pop() {
            l1.pop_front();
        }

        int front() {
            return l1.front();
        }

        bool isEmpty() {
            return l1.empty();
        }

        void display() {
            if (isEmpty()) {
                cout << "Stack is empty!" << endl;
                return;
            }
            cout << "Stack elements (top to bottom): ";
            for (int val : l1) {
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
// Stack elements (top to bottom): 30 40 30 20 10
// Stack elements (top to bottom): 40 30 20 10
// Front element: 40