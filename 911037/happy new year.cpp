#include <iostream>
using namespace std;

int main() {
  int n;
  scanf("%d",&n);

  int count = 2021;
  string str = " Happy New Year";

  for (n; n >= 19; n-=19) {
    printf("%d Happy New Year\n",count);
    count--;
  }

  if (n == 1) {
    printf("%d",count /= 1000);
  } else if (n == 2) {
    printf("%d",count /= 100);
  } else if (n == 3) {
    printf("%d",count /= 10);
  } else {
    printf("%d",count);
    for (int i = 0; i < n - 4; i++) {
      printf("%c",str[i]);
    }
  }
}
