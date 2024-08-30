#include<iostream>
#include<string>
using namespace std;

bool areIsomorphic(string str1, string str2) {
    if (str1.size() != str2.size()) {
        return false;
    }
    char map1[256] = {0};
    char map2[256] = {0};
    for (int idx = 0; idx < str1.size(); idx++) {
        if (map1[str1[idx]] != map2[str2[idx]]) {
            return false;
        }
        map1[str1[idx]] = idx + 1;
        map2[str2[idx]] = idx + 1;
    }
    return true;
}

int main() {
    string word1 = "app";
    string word2 = "yoo";
    cout << areIsomorphic(word1, word2) << endl;
    return 0;
}
