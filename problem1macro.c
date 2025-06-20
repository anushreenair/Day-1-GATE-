#include <stdio.h>
#define PRINT(x) printf("%s = %d\n", #x, x)

int main() {
    int a = 5;
    PRINT(a);
    return 0;
}
