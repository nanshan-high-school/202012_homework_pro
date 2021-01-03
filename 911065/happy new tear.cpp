#include <iostream>
using namespace std;

int i = -1;
int n[4] = {2,0,2,1};
void name () {
	string y = " Happy New Year";
	i++;
	if (i >= 4) {
		cout << y[i - 4];
	} else {
		cout << n[i];
	}
	
	if (i == 18) {
		n[3] -= 1;
		if (n[3] == -1) {
			n[2] -= 1;
			n[3] = 9;
			if (n[2] == -1) {
				n[1] -= 1;
				n[2] = 9;
				if (n[1] == -1) {
					n[0] -= 1;
					n[1] = 9;
				}
			}
		}
		i = -1;
		cout << "\n";
	}
}

int main() {
	int num;
	cin >> num;
	while (num > 0) {
		name();
		num--;
	}
}