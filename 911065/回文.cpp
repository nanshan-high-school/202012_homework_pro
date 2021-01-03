#include <iostream>
#include <vector>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);
    vector<char> temp1;
    for (int i = 0; i < sentence.length(); i++) {
        if (isalpha(sentence[i])){
            temp1.push_back(sentence[i]);
        }
    }
    vector<char> temp2(temp1.size());
    for(int i = 0; i < temp1.size(); i++){
        temp2[i] = temp1[temp1.size() - i - 1];
    }
    bool ans = true;
    for (int i = 0; i < temp1.size(); i++){
        if (temp1[i] != temp2[i]){
            ans = false;
        }
    }
    if (ans){
        cout << "yes";
    } else{
        cout << "no";
    }
}