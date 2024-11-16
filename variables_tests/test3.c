#include <stdio.h>

int main(void) {
  char j = 127;
  j = j + 10;
  printf("%u\n", j); // The return is 4294967177
}
