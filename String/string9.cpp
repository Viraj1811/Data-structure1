#include<iostream>
#include<string>
using namespace std;

string reverseSentence(string sentence) {
    string result, currentWord;
    for (int idx = sentence.size() - 1; idx >= 0; idx--) {
        if (sentence[idx] == ' ') {
            result += currentWord + " ";
            currentWord = "";
        } else {
            currentWord = sentence[idx] + currentWord;
        }
    }
    result += currentWord; // Add the last word
    return result;
}

int main() {
    string inputSentence = "Hello My Name";
    cout << reverseSentence(inputSentence) << endl;
    return 0;
}
