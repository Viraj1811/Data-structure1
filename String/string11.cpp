#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isRotatedString(const string& str1, const string& str2) {
    if (str1.size() != str2.size()) {
        return false;
    }
    string reversedStr1 = str1;
    reverse(reversedStr1.begin(), reversedStr1.end());
    if (reversedStr1 == str2) {
        return true;
    }
    return false;
}

int main() {
    string originalStr = "abc";
    string rotatedStr = "cba";
    cout << "Is it a rotated string? " << isRotatedString(originalStr, rotatedStr) << endl;
    return 0;
}
