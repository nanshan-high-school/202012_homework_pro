#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    string p;
    getline(cin,p);
    char a[p.size()];
    char tmp[p.size()];
    int k = 0;
    for (int i = 0; i < p.size(); i ++){
        if(p[i] != ' '){
            a[k] = p[i];
            k++;
        }
    }
    a[k] = '\0';
    for (int i = 0; a[i] != '\0'; i++){
        cout << i << ": " << a[i] << endl;
    }
    cout << "\n-----------------\n";
    int j = 0;
    for(int i = k - 1; i >= 0; i--){
            tmp[j] = a[i];
            cout << j << ": " << tmp[j] << "\n";
            j++;
    }
    bool c = true;
    for (int i = 0; a[i] != '\0'; i++){
        if(c == true){
            if(a[i] != tmp[i]){
                c = false;
            }
        }
    }
    if (c == true){
        cout << "true";
    }
    else{
        cout << "false";
    }
}
