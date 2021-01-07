#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int j;
    int year = 2021;
    int a = num / 19;
    int b = num % 19;
    string str = " Happy New Year";
    for (j = 0; j < a; j++){
        cout << year << str << "\n";
        year -= 1;
    }
    stringstream ss;
    ss << year;
    string str2 = ss.str();
    str2 += str;

    for (j = 0; j < b; j++) {
        cout << str2[j];
    }
}
