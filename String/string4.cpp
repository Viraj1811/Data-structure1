#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string findLongestCommonPrefix(string words[], int size) {
    if (size == 0) {
        return "";
    }

    sort(words, words + size);

    string firstWord = words[0];
    string lastWord = words[size - 1];
    string commonPrefix = "";

    for (int index = 0; index < min(firstWord.size(), lastWord.size()); index++) {
        if (firstWord[index] == lastWord[index]) {
            commonPrefix += firstWord[index];
        } else {
            break;
        }
    }

    return commonPrefix;
}

int main() {
    string wordsArray[] = {"flex", "flow", "flye"};
    int arraySize = sizeof(wordsArray) / sizeof(wordsArray[0]);
    cout << findLongestCommonPrefix(wordsArray, arraySize) << endl;
    return 0;
}
