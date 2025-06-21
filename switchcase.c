#include<stdio.h>

int main (){
    int x = 10;
    switch (x){
        case 2+3: printf("Hi");
        break;
        case 6+4:printf("Okay");
        break;

        case 1: printf("You are right");
        break;
        default: printf("Default case");
        break;
    }
}