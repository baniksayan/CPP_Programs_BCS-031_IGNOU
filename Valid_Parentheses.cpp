#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } else if (c == ')' && !stack.empty() && stack.top() == '(') {
                stack.pop();
            } else if (c == '}' && !stack.empty() && stack.top() == '{') {
                stack.pop();
            } else if (c == ']' && !stack.empty() && stack.top() == '[') {
                stack.pop();
            } else {
                return false;
            }
        }

        return stack.empty();
    }
};

int main() {
    Solution solution;
    string s = "([{}])";
    bool result = solution.isValid(s);
    if (result) {
        cout << "The string is valid." << endl;
    } else {
        cout << "The string is not valid." << endl;
    }
    return 0;
}
