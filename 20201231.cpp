#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;

    string s = " Happy New Year";
    int y = 2021;
    char yp[4];
    while (num != 0) {
        for (int i = 3; i >= 0; i--) {
            int yy = y;        
            yy /= pow(10, i);
            yy %= 10;
            cout << yy;
            num--;
            if (num == 0) {
                break;
            }
        }
        y--;

        for (int i = 0; i < s.length(); i++) {
            cout << s[i];
            num--;
            if (num == 0) {
                break;
            }
            if (i == s.length() - 1) {
                cout << "\n";
            }
        }
    }
}
