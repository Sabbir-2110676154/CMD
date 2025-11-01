/*
Write a C program that read the following string:
“Md. Tareq Zaman, Part-3, 2011”
a) Count number of words, letters, digits and other characters.
b) Separates letters, digits and others characters.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "Md. Tareq Zaman, Part-3,2011";

    int letters = 0, digits = 0, others = 0, words = 0;
    string letterStr = "", digitStr = "", otherStr = "";

    // Count letters, digits, and others
    for (int i = 0; i < str.size(); i++) {
        if (isalpha(str[i])) {
            letters++;
            letterStr += str[i];
        } else if (isdigit(str[i])) {
            digits++;
            digitStr += str[i];
        } else {
            others++;
            otherStr += str[i];
        }
    }

    // Count words
    stringstream ss(str);
    string word;
    while (ss >> word) {
        words++;
    }

    cout << "Original String: " << str << "\n\n";
    cout << "Number of Words: " << words << endl;
    cout << "Number of Letters: " << letters << endl;
    cout << "Number of Digits: " << digits << endl;
    cout << "Number of Other Characters: " << others << endl;

    cout << "\nSeparated Letters: " << letterStr << endl;
    cout << "Separated Digits: " << digitStr << endl;
    cout << "Separated Other Characters: " << otherStr << endl;

    return 0;
}
