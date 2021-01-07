#include <iostream>
using namespace std;

int main() {
  string a;
  getline(cin,a);

  int count = 0;
  for (int i = 0; i < a.length(); i++) {
    if (a[i] != ' ') {
      a[count] = a[i];
      count++;
    }
  }

  for (int i = 0; i < count; i++) {
    if (a[i] != a[count - 1 - i]) {
      cout << "false";
      return 0;
    }
  }

  cout << "true";
  return 0;
}
