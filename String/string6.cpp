#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int findMaxNestingDepth(string expression) {
    int maxDepth = 0, currentDepth = 0;
    for (int idx = 0; idx < expression.size(); idx++) {
        if (expression[idx] == '(') {
            currentDepth++;
        }
        if (currentDepth > maxDepth) {
            maxDepth = currentDepth;
        }
        if (expression[idx] == ')') {
            currentDepth = 0;
        }
    }
    return maxDepth;
}

int main() {
    string inputExpression = "()(())((()))";
    cout << findMaxNestingDepth(inputExpression) << endl;
    return 0;
}
