#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, total = 0;
	cin >> a >> b;

	long long mtr[a], cth[b];

	for (int i = 0; i < a; i++) {
		cin >> mtr[i];
	}
	for (int i = 0; i < b; i++) {
		cin >> cth[i];
	}

	sort(mtr, mtr + a);
	sort(cth, cth + b);

	for (int i = a - 1; i >= 0; i--) {
		for (int j = 0; j < b; j++) {
			if (cth[j] >= mtr[i]) {
				total += mtr[i];
				cth[j] = -1;
				mtr[i] = 0;
			}
		}
	} 

	cout << total;
}
