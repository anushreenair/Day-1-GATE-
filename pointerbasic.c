#include<stdio.h>

int main (){
    int a = 5;
    int *p = &a; // Pointer to integer a

    printf("%d\n", a);
    printf("%d\n", p); // Print value pointed by p to use the variable
    printf("%d\n", &a); // Print address of a
    printf("%d\n", &p); // Print address stored in pointer p
    printf("%d\n", *p); // Print address of a using pointer p
    printf("%d\n", *p++);// Post-increment pointer p, but print value before increment
    printf("%d\n",(*p)++);// Post-increment value pointed by p, but print value before increment
    printf("%d\n", *p = a + 5); // Assign value to pointer p, which is a + 5
    printf("%d\n",*p--); // Pre-decrement value pointed by p, but print value before decrement
    printf("%d\n", (*p)--); // Print value pointed by p after decrement
    printf("%d\n", --(*p)); // Pre-decrement value pointed by p and print it
    printf("%d\n", ++*p); // Pre-increment value pointed by p and print it
    printf("%d\n",--*p); // Pre-decrement value pointed by p and print it
    return 0;
}