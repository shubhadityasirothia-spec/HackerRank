🧿Given two integers, extract their last digits and print the sum of those digits.

Important Instructions
Do NOT write the entire logic in main().
Write a function int sumLastDigits(int a, int b) and call it from main().
Input Format

Two integers: {a} {b}

Constraints
0 ≤ a, b ≤ 10⁹

Output Format
Single line printing the result as: The sum of last digits is: {res}
...


🧿🧿You are given the length and width of a rectangle.
Your task is to calculate and print its area using a separate function, not inside main().

Important Instructions

Do NOT write the entire logic in main().
Create a separate function int area(int length, int width) and call it from main().
Input Format

Two integers: {length} {width}

Constraints

1 ≤ length ≤ 10⁶
1 ≤ width ≤ 10⁶
Output Format

Single line printing the result as:

The area is: {res} units
...


🧿🧿🧿In C, every data type has a specific range of values it can store. Write a program to display the minimum and maximum values for the following data types:

Integer types:
- short int
- int
- long int
- long long int
- unsigned short int
- unsigned int
- unsigned long int
- unsigned long long int

Character types:
- char
- unsigned char

Floating-point types:
- float
- double
- long double

Your task is to print the minimum and maximum values for each type using constants from limits.h and float.h.

Print the ranges in the exact format shown below (each on a new line):
short: {min} to {max}
int: {min} to {max}
long: {min} to {max}
long long: {min} to {max}
unsigned short: 0 to {max}
unsigned int: 0 to {max}
unsigned long: 0 to {max}
unsigned long long: 0 to {max}
char: {min} to {max}
unsigned char: 0 to {max}
float: {min} to {max}
double: {min} to {max}
long double: {min} to {max}

Input Format
No input is required for this problem.

Constraints

Use predefined macros from limits.h and float.h
Do not hardcode any value manually.
The program must compile and run successfully on a standard C compiler.
Output Format

Expected Output
short: -32768 to 32767
int: -2147483648 to 2147483647
long: -9223372036854775808 to 9223372036854775807
long long: -9223372036854775808 to 9223372036854775807
unsigned short: 0 to 65535
unsigned int: 0 to 4294967295
unsigned long: 0 to 18446744073709551615
unsigned long long: 0 to 18446744073709551615
char: -128 to 127
unsigned char: 0 to 255
float: 1.175494e-38 to 3.402823e+38
double: 2.225074e-308 to 1.797693e+308
long double: 3.362103e-4932 to 1.189731e+4932
...
