

#include <iostream>
#include <stack>
#include <cmath>   // for pow()
using namespace std;

// Function to evaluate postfix expression
int evaluatePostfix(string exp) {
    stack<int> s;

    for (char c : exp) {
        // If character is an operand (digit)
        if (isdigit(c)) {
            s.push(c - '0'); // convert char to int
        }
        // If character is an operator
        else {
            int val2 = s.top(); s.pop();
            int val1 = s.top(); s.pop();

            switch (c) {
                case '+': s.push(val1 + val2); break;
                case '-': s.push(val1 - val2); break;
                case '*': s.push(val1 * val2); break;
                case '/': s.push(val1 / val2); break;
                case '^': s.push(pow(val1, val2)); break;
                default: 
                    cout << "Invalid operator: " << c << endl;
                    return -1;
            }
        }
    }

    return s.top();
}

int main() {
    string exp;
    cout << "Enter Postfix Expression (single-digit operands): ";
    cin >> exp;

    cout << "Result = " << evaluatePostfix(exp) << endl;

    return 0;
}