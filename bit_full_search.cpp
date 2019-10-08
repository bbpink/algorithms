#include <iostream>
#include <bitset>

int main() {

  // 10bitのうち、3bit目が立っているか

  int n = 10;
  int b = 3;

  for (int bit=0; bit < (1 << n); bit++) {
    if (bit & (1 << (b - 1))) {
      // 立っている
    }
  }

  return 0;
}
