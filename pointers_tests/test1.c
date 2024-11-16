#include <stdio.h>

int main(void) {
  int age = 37;
  printf("%p\n", &age); /* Address returned: 0x7ffe6fc36fcc */
  // %p is the format specified to print an address value.
  
  // We can assing the address to a variable:
  int *address = &age;
  // This is a pointer to an integer.
  
  printf("%u\n", *address);
}
