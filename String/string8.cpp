#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string reverseWords(string str) {
    if (str.size() <= 0) return "";
    string reversedStr = "";
    for (int idx = str.size() - 1; idx >= 0; idx--) {
        if (str[idx] == ' ') {
            string word = "";
            for (int j = idx + 1; str[j] != ' ' && j < str.size(); j++) {
                word += str[j];
            }
            reversedStr += word + ' ';
        }
    }
    for (int idx = 0; str[idx] != ' ' && idx < str.size(); idx++) {
        reversedStr += str[idx];
    }
    return reversedStr;
}

int main() {
    string inputStr = "hello my name is Viraj";
    cout << reverseWords(inputStr) << endl;
    return 0;
}
