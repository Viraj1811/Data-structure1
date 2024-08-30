//prog-1
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool areAnagrams(string str1, string str2) {
    if (str1.size() != str2.size()) {
        return false;
    }
    for (int i = 0; i < str1.size(); i++) {
        int isFound = 0;
        char currentChar = str1[i];
        for (int j = 0; j < str2.size(); j++) {
            if (currentChar == str2[j]) {
                isFound = 1;
            }
        }
        if (isFound == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string word1 = "atm";
    string word2 = "mat";
    cout << areAnagrams(word1, word2) << endl;
    return 0;
}

