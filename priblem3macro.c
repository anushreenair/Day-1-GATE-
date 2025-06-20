#include<stdio.h>
#define INCREMENT(x) x + 1

int main (){
    int result = INCREMENT(5) * 2;
    printf("%d\n", result );
    return 0;
}

// int result = 5 + 1 * 2;  // ❗️ Operator precedence
//1 * 2 = 2
//5 + 2 = 7
//Correct Answer: 7