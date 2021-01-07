#include <iostream>
using namespace std;
int main() {
    int word;
    cin >> word;
    int total = 0;
    for (int i = 2021; i > 0; i--) {
        if(total != word) {
            if(i / 1000 != 0){
                cout << i / 1000;
                total++;
            }
            
        }
        if(total != word) {
            if(i / 100 != 0){
                cout << i / 100 - (i /1000)* 10;
                total++;
            }
            
        }
        if(total != word) {
            if(i / 10 != 0){
                cout << i % 100 /10;
                total++;
            }
            
        }
        if(total != word) {
            if(i != 0){
                cout << i - (i / 10) *10;
                total++;
            }
            
        }
        if(total != word) {
            cout << " ";
            total++;
        }
        if(total != word) {
            cout << "h";
            total++;
        }
        if(total != word) {
            cout << "a";
            total++;
        }
        if(total != word) {
            cout << "p";
            total++;
        }
        if(total != word) {
            cout << "p";
            total++;
        }
        if(total != word) {
            cout << "y";
            total++;
        }
        if(total != word) {
            cout << " ";
            total++;
        }
        if(total != word) {
            cout << "n";
            total++;
        }
        if(total != word) {
            cout << "e";
            total++;
        }
        if(total != word) {
            cout << "w";
            total++;
        }
        if(total != word) {
            cout << " ";
            total++;
        }
        if(total != word) {
            cout << "y";
            total++;
        }
        if(total != word) {
            cout << "e";
            total++;
        }
        if(total != word) {
            cout << "a";
            total++;
        }
        if(total != word) {
            cout << "r\n";
            total++;
        }
    }
}
