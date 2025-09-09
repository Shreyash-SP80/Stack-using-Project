#include<iostream>
#include<stack>
using namespace std;

// Stack implementation
// class Stack {
//     //properties
//     public:
//         int *arr;
//         int top;
//         int size;

//     // behaviour
//     Stack(int size) {
//         this -> size = size;
//         arr = new int[size];
//         top = -1;
//     }

//     void push( int element) {
//         if(size - top > 1) {
//             top++;
//             arr[top] = element;
//         }
//         else{
//             cout << "Stack OverFlow" << endl;
//         }
//     }

//     void pop() {
//         if(top >=0 ) {
//             top--;
//         }
//         else{
//             cout << "Stack UnderFlow" << endl;
//         }
//     }

//     int peek() {
//         if(top >=0 )
//             return arr[top];
//         else
//         {
//             cout << "Stack is Empty" << endl;
//             return -1;
//         }
//     }

//     bool isEmpty() {
//         if( top == -1) {
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

// };

int  main() {

    // Creation of stack
    stack<int> s;

    // push operation
    s.push(2);
    s.push(3);

    cout << "Top element: " << s.top() << endl;     // Top element: 3

    // pop operation
    s.pop();

    // see top element
    cout << "Top element: " << s.top() << endl;     // Top element: 2

    // isempty operation
    if (s.empty()) {
        cout << "Stack is Empty.." << endl;
    } else {
        cout << "Stack is not Empty.." << endl;
    }
    // Stack is not Empty..

    // Check size
    cout << "Size of stack s is: " << s.size() << endl;    // Size of stack s is: 1
    

    // Stack st(5);

    // st.push(22);
    // st.push(43);
    // st.push(44);
    // st.push(22);
    // st.push(43);
    // st.push(44);

    // cout << st.peek() << endl;

    // st.pop();

    // cout << st.peek() << endl;

    // st.pop();

    // cout << st.peek() << endl;

    // st.pop();

    // cout << st.peek() << endl;

    // if(st.isEmpty()) {
    //     cout << "Stack is Empty mere dost " << endl;
    // }
    // else{
    //     cout << "Stack is not Empty mere dost " << endl;
    // }
    return 0;
}


