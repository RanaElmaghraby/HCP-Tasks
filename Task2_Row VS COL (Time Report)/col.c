
#include <stdio.h>

#define N 1000

int main() {
    static int matrix[N][N];
    long long sum = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = i + j;
        }
    }

    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            sum += matrix[i][j];
        }
    }


    return 0;
}
