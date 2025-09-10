#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverseString(string str) {
    stack<char> st;

    // Step 1: Push all characters into stack
    for (char ch : str) {
        st.push(ch);
    }

    // Step 2: Pop characters to build reversed string
    string reversed = "";
    while (!st.empty()) {
        reversed += st.top();  // take top character
        st.pop();              // remove it
    }

    return reversed;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string output = reverseString(input);
    cout << "Reversed string: " << output << endl;

    return 0;
}

