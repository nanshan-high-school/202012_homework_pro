#include <iostream>
#include <vector>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    vector<char> c1;
    for (int i = 0; i < input.length(); i++) {
        if (isalpha(input[i])) {
            c1.push_back(input[i]);
        }
    }

    vector<char> c2(c1.size());
    for (int i = 0; i < c1.size(); i++) {
        c2[i] = c1[c1.size() - i - 1];
    }

    bool t = true;
    for (int i = 0; i < c1.size(); i++) {
        // c1[i] == c1[c1.size() - i - 1];
        if (c1[i] != c2[i]) {
            t = false;
        }
    }

    if (t) {
        cout << "yes\n";
    } else {
        cout << "no\n";
    }
}
// 頭尾跑 遇到空白跳過
