#include <iostream>
#include <vector>
using namespace std;

int main() {

    cout << "Enter / to stop." << endl << endl;
    vector<char> owo;
    int i = 0;
    while(true) {
        char a;
        cin >> a;
        if(a == '/') {
            break;
        }

        if(a != ' '){
            owo.push_back(a);
            i++;
        }
        
        
    }

    cout << "\n" << "\n";

    for (int j = 0; j < i; j++) {
        cout << owo[j];
    }

    for (; i > -1; i--) {
        cout << owo[i];
    }
}
