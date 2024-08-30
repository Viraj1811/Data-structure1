#include<iostream>
#include<string>
using namespace std;

string findLargestOddNumber(string str) {
    int num = stoi(str);
    if (num % 2 != 0) {
        return str;
    } else {
        for (int idx = str.size() - 1; idx >= 0; idx--) {
            num = int(str[idx]);
            if (num % 2 != 0) {
                return str.substr(0, idx + 1);
            }
        }
    }
    return "";
}

int main() {
    string numberStr = "52";
    cout << findLargestOddNumber(numberStr) << endl;
    return 0;
}
