#include<bits/stdc++.h>
using namespace std;
bool isValid(std::string s) {
   stack<char> brackets;

    for (char bracket : s) {
        if (bracket == '(' || bracket == '{' || bracket == '[') {
            brackets.push(bracket);
        } else {
            if (brackets.empty()) {
                return false;
            }
            char top = brackets.top();
            if ((bracket == ')' && top == '(') ||
                (bracket == '}' && top == '{') ||
                (bracket == ']' && top == '[')) {
                brackets.pop();
            } else {
                return false;
            }
        }
    }
    return brackets.empty();
}

int main() {
    string s;
    cin >> s;
  cout << isValid(s) << endl;

    return 0;
}
