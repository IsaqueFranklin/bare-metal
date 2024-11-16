- C is a statically typed language, this means that any variable has an associated type and this type is known at compilation time. C variables are int, char, short, long, float, double, long double 

- char type is used to store ASCII letters but it can also hold small integers from -128 to 127. It takes at least 1 byte.

- We're guaranteed that 'short' is not longer than int, and we're guaranteed that 'longer' is not shorter than int.

- int takes at least 2 bytes and long at least 4 bytes. 

- Unsigned variables are variables that can only represent non-negative values.

- UNSIGNED: char -> from 0 to at least 255. int -> from 0 to at least 65535. short -> from 0 to at least 65535. long -> from 0 to at least 4294967295.

THE PROBLEM WITH OVERFLOW
- How can we make sure our numbers do not exceed the limit?
- When you exceed the limit the variable is going to reset at zero (if it's Unsigned). char = 255, if char + 1 = char, it resets char to zero.
- If you have a signed value the return will be a huge undefined number.
- That means tha C does not protect you from going over the limits of a type, which can cause many bugs.
- The gcc compiler will warn you if yout declare a variable with the wrong type, but not if you define it in the right range but increase the number later in the code exceeding the limit.

FLOAT POINT NUMBER
- Floating point types can represent a much larger set of
values than integers can, and can also represent
fractions, something that integers can't do.
- Using floating point numbers, we represent numbers
as decimal numbers times powers of 10.
- The minimum requirements for any C implementation
is that float can represent a range between 10^-37
and 10^+37, and is typically implemented using 32
bits.
- double can represent a bigger set of numbers.
long double can hold even more numbers.

CONSTANTS
- A constant is similar to a variable but it has to have 'const' and it needs to always specify a value. const in AGE = 37; It's more commom to declare the constants in uppercase.
- Usually: uppercase names means constant and lowercase means variable.
- #define AGE 37 -> Is also valid sintax to declare constants. In this case is not necessary to add a type, and you also don't need the '=' sign, and you omit the ';' at the end. The C compiler will infer the type from the value specified at compile time.

OPERATORS
- arithmetic, comparison, logical, compound assignment, bitwise, pointer, structure and miscellaneaous operators. 
Arithmetic Operators:
- % is modulo.
- ++ or +a is increment.
- += is a + = b.
Ternary Operator:
- Only operator in C that works with 3 operands.
- How it works: <condition> ? <expression> : <expression> => a ? b : c.
Sizeof
- It returns the size of the operand you pass.

CONDITIONALS
- The switch: If you need to do too many if / else / if blocks to
perform a check, perhaps because you need to check
the exact value of a variable, then switch can be
very useful to you.

- int a = 1;
switch (a) {
 case 0:
 /* do something */
 break;
 case 1:
 /* do something else */
 break;
 case 2:
 /* do something else */
 break;
}

- We need a break keyword at the end of each case,
to avoid the next case to be executed when the one
before ends.
- You can add a "catch-all" case at the end, labeled 'default'.

FOR LOOPS
- for (int i = 0; i <= 10; i++) {
 /* instructions to be repeated */
}

WHILE LOOPS
- while (i < 10) {
    // Doing some stuff.
    i++;
    // Incrementing i so the loop is not infinite.
}
- While loops are great, but there might be times when
you need to do one particular thing: you want to
always execute a block, and then maybe repeat it.

-   int i = 0;
    do {
        /* do something */
        i++;
    } while (i < 10);

ARRAYS
- An array is a variable that stores multiple values.
- Define an array like this: int prices[6];
- You must always specify the size of the array. C does
not provide dynamic arrays out of the box (you have to
use a data structure like a linked list for that).

STRINGS
- In C, strings are a special king of array: a string is an array of char values: char name[7];
- A strings can be initialized like a normal array: char name[7] = { 'F', 'l', 'a', 'v', 'i', 'o' };
- char name[7] = "Flavio";
- You can print a string via printf() using %s : printf("%s", name);
- the last character of a string must be a 0 value and we must make space for it.

- #include <string.h>
- And once you do that, you have access to:
strcpy() to copy a string over another string
strcat() to append a string to another string
strcmp() to compare two strings for equality
strncmp() to compare the first n characters of
two strings
strlen() to calculate the length of a string
and many, many more.

POINTERS
- A pointer is the address of a block of memory that
contains a variable.
- When you declare an integer number like this:
int age = 37;
We can use the & operator to get the value of the
address in memory of a variable:
printf("%p", &age); /* 0x7ffeef7dcb9c */

- in an array the like int prices[3] = {5, 4, 3}, the 'prices' is a pointer to the first item  of the array.
- printf("%u", *prices); // return 5.
- We can get the second item of the array by adding 1 to the prices pointer: printf("%u", *(prices + 1)); /* 4 */. And so on for all the other values.

FUNCTIONS
- They are a way we can organize our code into subroutines that we can give a name to and call when we need them.
- main function is the entry point for every C program.
- If the function has no return value, you can use the keyword 'void' before the function name, otherwise you specify the function return value (int, loat, const char * for a string...).
- You cannot return more than one value from a function.
- If the function does not have arguments we can use void.
- Parameters are passed by copy. This means that if
you modify value1 , its value is modified locally, and
the value outside of the function, where it was passed
in the invocation, does not change.
- If you pass a pointer as a parameter, you can modify
that variable value because you can now access it
directly using its memory address.
- Recursion is weird.

INCLUDE AND OUTPUT
- C is a small language and the "core" of C does not include any Input/Output functionality.
- Is provided to us by the stdio.h lib.
- This library provides us, among many other functions:
printf()
scanf()
sscanf()
fgets()
fprintf()
- With I/O function we always work with streams. A stream is a high level interface that can represent a device or file.
- From the C standpoint, we don't have any difference in reading from a file or reading from the command line: it's an I/O stream in any case.
- Using its more general counterpart fprintf() , we can specify the stream t write to.
- There are other format specifiers like %d:
%d for signed deciaml int
%c for a char
%s for a string
%f for floating point numbers
%p for pointers
- scanf(); => get input from user.

VARIABLES SCOPE
- The position determines 2 types of variables:
    -- global variables: variable defined/declared outside a function.
    -- local variables: variable declared inside a function.
- Global variables are accessible from any function of the program, and they are available for the whole execution of the program, until it ends.

STATIC VARIABLES
- What's a static variable? A static variable is initialized to 0 if no initial value is specified, and it retains the value across function calls.

TYPE DEFINITIONS
- The 'typedef' keyword in C allows you to define new types (your own).
- typedef existingtype NEWTYPE
