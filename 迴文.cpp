#include <iostream>
#include <vector>
using namespace std;

int main() {
	char a;
	vector <char> word;
	
	while (a != '\n') {
		a = cin.get();
		if (a != ' ') word.push_back(a);
	}
	
	int halfsize = word.size() / 2;

	char NoSpaceF[halfsize], NoSpaceB[halfsize];

	for (int i = 0, j = word.size() - 1; i < halfsize; i++) {
		j--;
		NoSpaceF[i] = word[i];
		NoSpaceB[i] = word[j];
	}

	bool same = true;

	for (int i = 0; i < halfsize; i++) {
		if (NoSpaceF[i] != NoSpaceB[i]) same = false;
	}

	if (same == true) cout << "yes"; else cout << "no";
}
