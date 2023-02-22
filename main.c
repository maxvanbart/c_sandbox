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


//struct database {
//    int[] data;
//    int length;
//};



int main() {
    printf("Hello World!\n");

    int i = 8;
    int j = fibonacci(i);

    printf("The %dth fibonacci number is: %d\n", i, j);

    data = new double[i];

    for (int k = 0; k < i; k++) {
        data[k] = k;
    };

    for (int k = 0; k < i; k++) {
        printf("%d\n", data[k]);
    };

    delete[data];

    return 0;
}
