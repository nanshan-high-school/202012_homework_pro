#include <iostream>
using namespace std;

int main() {
    int c = 0;
    cin >> c;
    int y = 2021;
    int a = c / 19;
    int b = c % 19;
    char an[15] = {' ','H','a','p','p','y',' ','n','e','w',' ','y','e','a','r'};//從an[1]開始叫

    int check = 16 * c + 19;
    for (int i = 0; i < a; i++){
        cout << y;
        y -= 1;
        cout << " Happy new year\n";
    }

    int t1 = y / 1000;
    int t2 = y / 100;
    int t3 = y / 10;
    if (b != 0){
        if (b == 1){
            cout << t1;
        }
        else if (b == 2){
            cout << t2;
        }
        else if (b == 3){
            cout << t3;
        }
        else if (b >= 4){
            cout << y;
        }
        
    }
    for (int i = 0; i < b - 4; i++){
        cout << an[i];
    }
    
}
