#include<stdio.h>
#include<math.h>

int main (){
    int a = 10, b = 20, c = 30;
    int result;

    // Arithmetic Operators
    result = a + b; // Addition
    printf("Addition: %d\n", result);
    
    result = b - a; // Subtraction
    printf("Subtraction: %d\n", result);
    
    result = a * b; // Multiplication
    printf("Multiplication: %d\n", result);
    
    result = c / a; // Division
    printf("Division: %d\n", result);
    
    result = c % b; // Modulus
    printf("Modulus: %d\n", result);

    // Relational Operators
    printf("a < b: %d\n", a < b);
    printf("a > b: %d\n", a > b);
    printf("a == b: %d\n", a == b);
    
    // Logical Operators
    printf("a < b && b < c: %d\n", (a < b) && (b < c));
    printf("a < b || b > c: %d\n", (a < b) || (b > c));
    printf("a < b || b > c: %d\n", (a > b) || (b < c));
    printf("a < b || b > c: %d\n", (a > b) || (b > c));
    printf("!(a < b): %d\n", !(a < b));
    printf("!(a > b): %d\n", !(a > b));
    
    // Bitwise Operators
    printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);
    printf("a ^ b: %d\n", a ^ b);
    printf("~a: %d\n", ~a);
    // Shift Operators
    printf("a << 1: %d\n", a << 1);
    printf("a >> 1: %d\n", a >> 1);

    // Assignment Operators
    result = a; // Simple assignment    
    printf("Simple assignment result: %d\n", result);
    result += b; // Add and assign  
    printf("Add and assign result: %d\n", result);
    result -= a; // Subtract and assign
    printf("Subtract and assign result: %d\n", result);
    result *= b; // Multiply and assign
    printf("Multiply and assign result: %d\n", result);
    result /= c; // Divide and assign
    printf("Divide and assign result: %d\n", result);
    result %= b; // Modulus and assign
    printf("Modulus and assign result: %d\n", result);
    result &= a; // Bitwise AND and assign
    printf("Bitwise AND and assign result: %d\n", result);
    result |= b; // Bitwise OR and assign
    printf("Bitwise OR and assign result: %d\n", result);
    result ^= a; // Bitwise XOR and assign
    printf("Bitwise XOR and assign result: %d\n", result);
    result <<= 1; // Left shift and assign
    printf("Left shift and assign result: %d\n", result);
    result >>= 1; // Right shift and assign
    printf("Right shift and assign result: %d\n", result);

    // Conditional Operator
    result = (a < b) ? a : b; // Ternary operator
    printf("Conditional operator result: %d\n", result);
    result = (a > b) ? a : b; // Ternary operator
    printf("Conditional operator result: %d\n", result);
    result = (a == b) ? a : b; // Ternary operator
    printf("Conditional operator result: %d\n", result);
    result = (a != b) ? a : b; // Ternary operator
    printf("Conditional operator result: %d\n", result);
    result = (a <= b) ? a : b; // Ternary operator
    printf("Conditional operator result: %d\n", result);
    result = (a >= b) ? a : b; // Ternary operator
    printf("Conditional operator result: %d\n", result);
    result = (a == b) ? a : b; // Ternary operator
    printf("Conditional operator result: %d\n", result);

    // Sizeof Operator
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of long long: %zu bytes\n", sizeof(long long));
    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("Size of void pointer: %zu bytes\n", sizeof(void*));
    printf("Size of function pointer: %zu bytes\n", sizeof(void (*)()));
    printf("Size of array of 10 ints: %zu bytes\n", sizeof(int[10]));
    printf("Size of array of 10 floats: %zu bytes\n", sizeof(float[10]));
    printf("Size of array of 10 doubles: %zu bytes\n", sizeof(double[10]));
    printf("Size of array of 10 chars: %zu bytes\n", sizeof(char[10]));

    // Type Casting
    double d = 5.5;
    int i = (int)d; // Explicit type casting from double to int
    printf("Type casting from double to int: %d\n", i);
    float f = (float)d; // Explicit type casting from double to float
    printf("Type casting from double to float: %f\n", f);
    long l = (long)d; // Explicit type casting from double to long
    printf("Type casting from double to long: %ld\n", l);
    char ch = (char)d; // Explicit type casting from double to char
    printf("Type casting from double to char: %c\n", ch);
    
    // Implicit type casting
    int x = 10;
    float y = 5.5;
    float z = x + y; // Implicit type casting from int to float
    printf("Implicit type casting from int to float: %f\n", z);
    double w = x + y; // Implicit type casting from int to double
    printf("Implicit type casting from int to double: %f\n", w);
    long m = x + y; // Implicit type casting from int to long
    printf("Implicit type casting from int to long: %ld\n", m);
    char n = x + y; // Implicit type casting from int to char
    printf("Implicit type casting from int to char: %c\n", n);
    return 0;
}