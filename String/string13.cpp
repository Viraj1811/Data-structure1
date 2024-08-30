#include <iostream>
#include <string>
using namespace std;

int calculateBeautyScore(const string& inputString) {
    int beautySum = 0;
    for (int i = 0; i < inputString.size(); i++) {
        for (int j = i; j < inputString.size(); j++) {
            string substring = "";
            int maxFrequency = 0;
            int minFrequency = 1000;

            for (int a = i; a <= j; a++) {
                substring += inputString[a];
            }

            for (char c = 'a'; c <= 'z'; c++) {
                int count = 0;
                for (int b = 0; b < substring.size(); b++) {
                    if (substring[b] == c) {
                        count++;
                    }
                }
                if (count > 0) {
                    if (maxFrequency < count) {
                        maxFrequency = count;
                    }
                    if (minFrequency > count) {
                        minFrequency = count;
                    }
                }
            }

            beautySum += (maxFrequency - minFrequency);
        }
    }
    return beautySum;
}

int main() {
    string inputStr = "aabcb";
    cout << "Beauty score: " << calculateBeautyScore(inputStr) << endl;
    return 0;
}
