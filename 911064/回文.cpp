#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    vector<char>reverse;
    for (int i = input.length(); i > 0; i--) {
        if(isalpha(input[i])) {
            reverse.push_back(input[i]);
        }
    }

    bool flag = false;
   
    for (int i = 0; i < reverse.size(); i++) {
       
        if (input[i] != reverse[i]) {
            break;
        } else {
            flag = true;
        }
    }

    if (flag) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
