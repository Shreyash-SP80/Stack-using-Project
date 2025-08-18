#include <iostream>
#include <vector>
using namespace std;


/*
    📌 Algorithm: Balanced Parentheses Checker (using Stack)

    1. Create an empty stack.
    2. Traverse each character of the expression:
        a) If the character is an opening bracket '(', '[', or '{' → push it onto the stack.
        b) If the character is a closing bracket ')', ']', or '}':
            - If the stack is empty → return Unbalanced.
            - Else pop the top element and check:
                i. If it does not match the corresponding opening bracket → return Unbalanced.
    3. After processing all characters:
        - If the stack is empty → return Balanced.
        - Else → return Unbalanced.
*/


class  Stack {
    vector<int> arr;

    public:
        void  push(int ele) {
            arr.push_back(ele);
        }

        void  pop() {
            arr.pop_back();
        }

        int  fornt() {
            return arr.back();
        }

        bool  isEmpty() {
            return arr.empty();
            // OR
            // return arr.size() < 0;
        }
};

bool    checkBalancedOrNot(string expression) {
    Stack s1;

    for (char c: expression) {
        if (c == '(' || c == '[' || c == '{') {
            s1.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (s1.isEmpty()) return false;

            char ch = s1.fornt();
            s1.pop();

            if ((c == ')' && ch != '(') || (c == ']' && ch != '[') || (c == '}' && ch != '{')) 
                return false;
        } 
    }

    return s1.isEmpty();

}

int   main() {
    string expression;
    Stack s1;

    cout << "Enter an expression: ";
    cin >> expression;

    
    if (checkBalancedOrNot(expression)) {
        cout << "Balanced.." << endl;
    } else {
        cout << "Unbalanced.." << endl;
    }
    return 0;
}