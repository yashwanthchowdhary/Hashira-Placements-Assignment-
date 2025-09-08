#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 3  // k = 3 → polynomial degree 2

// Gaussian elimination
void gaussian_elimination(long double A[N][N+1], long double sol[N]) {
    for (int i = 0; i < N; i++) {
        // Pivot
        int maxRow = i;
        for (int k = i + 1; k < N; k++) {
            if (fabsl(A[k][i]) > fabsl(A[maxRow][i]))
                maxRow = k;
        }
        for (int k = i; k <= N; k++) {
            long double tmp = A[maxRow][k];
            A[maxRow][k] = A[i][k];
            A[i][k] = tmp;
        }

        // Eliminate
        for (int k = i + 1; k < N; k++) {
            long double factor = A[k][i] / A[i][i];
            for (int j = i; j <= N; j++) {
                A[k][j] -= factor * A[i][j];
            }
        }
    }

    // Back substitution
    for (int i = N - 1; i >= 0; i--) {
        sol[i] = A[i][N] / A[i][i];
        for (int k = i - 1; k >= 0; k--) {
            A[k][N] -= A[k][i] * sol[i];
        }
    }
}

int main() {
    // Points: (1,4), (2,7), (3,12)
    long double x[N] = {1, 2, 3};
    long double y[N] = {4, 7, 12};

    long double A[N][N+1];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = powl(x[i], N - j - 1);
        }
        A[i][N] = y[i];
    }

    long double sol[N];
    gaussian_elimination(A, sol);

    printf("Polynomial coefficients:\n");
    for (int i = 0; i < N; i++) {
        printf("a%d = %.0Lf\n", N - i - 1, sol[i]);
    }
    printf("Constant term c = %.0Lf\n", sol[N-1]);

    return 0;
}
