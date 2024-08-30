#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string findLongestPalindrome(string str) {
    if (str.size() <= 0) return "";
    int startIndex = -1, maxLength = 0;
    string longestPalindrome = "";

    for (int start = 0; start < str.size(); start++) {
        for (int end = start + 1; end < str.size(); end++) {
            string currentSubstring = "";
            for (int idx = start; idx <= end; idx++) {
                currentSubstring += str[idx];
            }

            string reversedSubstring = currentSubstring;
            reverse(reversedSubstring.begin(), reversedSubstring.end());

            if (reversedSubstring == currentSubstring) {
                if (maxLength < currentSubstring.size()) {
                    maxLength = currentSubstring.size();
                    startIndex = start;
                }
            }
        }
    }

    if (startIndex == -1) return "";

    for (int idx = startIndex; idx < startIndex + maxLength && idx < str.size(); idx++) {
        longestPalindrome += str[idx];
    }

    return longestPalindrome;
}

int main() {
    string inputStr = "absdfksdfkn";
    cout << findLongestPalindrome(inputStr) << endl;
    return 0;
}
