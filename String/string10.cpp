#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int convertRomanToInt(string roman) {
    int total = 0;
    for (int idx = roman.size() - 1; idx < roman.size(); idx--) {
        if (roman[idx] == 'I') {
            total += 1;
        } else if (roman[idx] == 'V') {
            if (idx - 1 >= 0 && roman[idx - 1] == 'I') {
                total += 4;
                idx--;
            } else {
                total += 5;
            }
        } else if (roman[idx] == 'X') {
            if (idx - 1 >= 0 && roman[idx - 1] == 'I') {
                total += 9;
                idx--;
            } else {
                total += 10;
            }
        } else if (roman[idx] == 'L') {
            if (idx - 1 >= 0 && roman[idx - 1] == 'X') {
                total += 40;
                idx--;
            } else {
                total += 50;
            }
        } else if (roman[idx] == 'C') {
            if (idx - 1 >= 0 && roman[idx - 1] == 'X') {
                total += 90;
                idx--;
            } else {
                total += 100;
            }
        } else if (roman[idx] == 'D') {
            if (idx - 1 >= 0 && roman[idx - 1] == 'C') {
                total += 400;
                idx--;
            } else {
                total += 500;
            }
        } else if (roman[idx] == 'M') {
            if (idx - 1 >= 0 && roman[idx - 1] == 'C') {
                total += 900;
                idx--;
            } else {
                total += 1000;
            }
        }
    }
    return total;
}

int main() {
    string romanNumber = "XXIX";
    cout << convertRomanToInt(romanNumber) << endl;
    return 0;
}
