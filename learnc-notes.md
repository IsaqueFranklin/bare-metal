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
