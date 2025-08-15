#include <iostream>
using namespace std;


class  Stack {
    int *arr, top, size;
    public:
        Stack(int size) {
            this->size = size;
            this->arr = new int[size];
            this->top = -1;
        }

        void  push(int ele) {
            if (top == size - 1) {
                cout << "Stack Overflows.." << endl;
                return;
            }
            arr[++top] = ele;
            cout << ele << " is inserted" << endl;
        }

        int  pop() {
            if (top == -1) {
                cout << "Stack underFlows.." << endl;
                return 0;
            } 
            return arr[top--];
        }

        int  front() {
            return arr[top];
        }

        bool  isEmpty() {
            return (top == -1)? true: false;
        }

        bool  isFull() {
            return (top == size-1)? true: false;
        }

        void display() {
            if (isEmpty()) {
                cout << "Stack is empty!" << endl;
                return;
            }
            cout << "Stack elements (top to bottom): ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int  main () {
    Stack s1(4);

    cout << (s1.isEmpty()? "Stack is empty": "Stack is not empty") << endl;
    s1.pop();
    s1.push(10);
    cout << (s1.isEmpty()? "Stack is empty": "Stack is not empty") << endl;
    s1.push(20);
    s1.push(30);
    s1.push(40);

    cout << (s1.isFull()? "Stack is full": "Stack is not full") << endl;

    s1.push(30);
    s1.display();

    cout << "Poped element: " << s1.pop() << endl;

    s1.display();
    cout << "Front element: " << s1.front() << endl;

    return 0;
}


// Output => 
// Stack is empty
// Stack underFlows..
// 10 is inserted
// Stack is not empty
// 20 is inserted
// 30 is inserted
// 40 is inserted
// Stack is full
// Stack Overflows..
// Stack elements (top to bottom): 40 30 20 10
// Poped element: 40
// Stack elements (top to bottom): 30 20 10
// Front element: 30

