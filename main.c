#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

struct NotAClass {
    double a;
    double b;
    double c;
};

double pythagoras(struct NotAClass C) {
    return sqrt(pow(C.b, 2) + pow(C.a, 2));
}

//int (*create_matrix(int rows, int cols)) {
//    // Create the matrix
//    int (*matrix)[cols] = malloc(rows * cols * sizeof(int));
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            matrix[i][j] = i * cols + j;
//        }
//    }
//    return matrix;
//}

struct matrix {
    int rows;
    int cols;
    int *data;
};

void print_matrix(struct matrix mat) {
    for (int i = 0; i < mat.rows; i++) {
        for (int j = 0; j < mat.cols; j++) {
            int index = mat.cols * i + j;
            int* dat = mat.data;
            printf("%d ", mat.data[index]);
        }
        printf("\n");
    }
}


struct matrix create_matrix(int rows, int cols, int data[]) {
    struct matrix mat;
    mat.rows = rows;
    mat.cols = cols;
//    int data[rows * cols];
    for (int i = 0; i < rows * cols; i++) {
        data[i] = 0;
    }
    mat.data = data;

    return mat;
}


struct matrix matrix_mult(struct matrix a, struct matrix b) {
    int colsc = b.cols;
    int rowsc = a.rows;
    int datac[colsc * rowsc];
    if (a.cols != b.rows) {
        struct matrix c;
        return c;
    }
    struct matrix c = create_matrix(colsc, rowsc, datac)

};





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

    // initialize data array such that the memory does not get released when the matrix has been made
    int matdat1[9];
    struct matrix mat1 = create_matrix(3, 3, matdat1);

    print_matrix(mat1);


    return 0;
}






