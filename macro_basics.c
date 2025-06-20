#include<stdio.h>


//constant macro
#define PI 3.14 // This is a macro definition for PI


//function like macro
#define SQUARE(x) ((x) * (x)) // This is a macro to calculate the square of a number


//macro to print sum
#define PRINT_SUM(a,b) \
    printf("Sum of %d and %d is %d\n", (a),(b),(a)+(b))

    int main (){
        //using constant macro
        float radius = 2.0; 
        float area = PI * radius * radius;
        printf("Area of circle : %.2f\n", area);

        //Using function like macro
        int num = 5; 
        int result = SQUARE(num);
        printf("Square of %d is %d\n", num, result);

        //Using macro to print sum 
        int a = 10, b = 20; 
        PRINT_SUM(a,b);

        return 0;
    }


