#include<stdio.h>
#define DEBUG_VAR(x) printf("Variable 'is' has value %d\n", #x, x)

int main (){
    int gateRank = 1;
    DEBUG_VAR(gateRank);
    return 0;
}

// Variable 'gateRank' has value 1
