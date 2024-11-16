#include <stdio.h>

const int SIZE = 5;
int prices[SIZE];

// You can initialize an array at definition time, like this:
int prices[5] = { 1, 2, 3, 4, 5 };

//But you can also assign a value after the definition, in this way:
int prices[5];

prices[0] = 1;
prices[1] = 2;
prices[2] = 3;
prices[3] = 4;
prices[4] = 5;

// Even more pratical using a loop:
int prices[5];
for (int i = 0; i < 5; i++) {
 prices[i] = i + 1;
}

//the variable name of the array, prices in the above example, is a pointer to the first element of the array.
