#include<iostream>
#include<string>
using namespace std;

string removeOuterParentheses(string str) {
    string result = "";
    int depth = 0;
    for (int idx = 0; idx < str.size(); idx++) {
        if (str[idx] == '(') {
            if (depth) {
                result += str[idx];
            }
            depth++;
        } else {
            depth--;
            if (depth) {
                result += str[idx];
            }
        }
    }
    return result;
}

int main() {
    string input = "(()()())";
    cout << removeOuterParentheses(input) << endl;
    return 0;
}
