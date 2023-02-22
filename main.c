#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}



int main() {
    printf("Hello World!\n");

    int i = fibonacci(8);
    const char out = (char) i;

    printf("The fibonacci number is: %d\n", i);
    return 0;
}
