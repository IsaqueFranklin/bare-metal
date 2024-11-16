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
- A constant is similar to a variable but it has to have 'const' and it needs to always specify a value. const in AGE = 37; It's more commom to declare the constants in uppercase.
- Usually: uppercase names means constant and lowercase means variable.
- #define AGE 37 -> Is also valid sintax to declare constants.
