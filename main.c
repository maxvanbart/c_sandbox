#include <stdio.h>
#include <math.h>

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


struct NotAClass {
    double a;
    double b;
    double c;
};

double pythagoras(struct NotAClass C) {
    return sqrt(pow(C.b, 2) + pow(C.a, 2));
}



int main() {
    printf("Hello World!\n");

    int i = 18;
    int j = fibonacci(i);

    printf("The %dth fibonacci number is: %d\n", i, j);

    double data[i];

    for (int k = 0; k < i; k++) {
        data[k] = k;
    }

    for (int k = 0; k < i; k++) {
        printf("%f\n", data[k]);
    }

    struct NotAClass class;
    class.a = 3;
    class.b = 4;
    class.c = pythagoras(class);

    printf("%f\n", class.c);



    return 0;
}
