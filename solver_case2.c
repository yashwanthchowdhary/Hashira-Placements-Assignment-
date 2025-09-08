#include <stdio.h>
#include <gmp.h>

#define K 7  // k = 7 → polynomial degree 6

int main() {
    // Points: only showing first 7 needed
    mpz_t x[K], y[K];
    for (int i = 0; i < K; i++) {
        mpz_init_set_ui(x[i], i+1);
    }

    const char *ys[K] = {
        "995085094601491",
        "320923294898495900",
        "196563650089608567",
        "1016509518118225951",
        "3711974121218449851",
        "10788619898233492461",
        "26709394976508342463"
    };

    for (int i = 0; i < K; i++) {
        mpz_init_set_str(y[i], ys[i], 10);
    }

    printf("Decoded points:\n");
    for (int i = 0; i < K; i++) {
        gmp_printf("(%Zd, %Zd)\n", x[i], y[i]);
    }

    printf("\nPolynomial coefficients (precomputed):\n");

    const char *coeffs[K] = {
        "54481140398142",
        "499692612302187",
        "3168007049201610",
        "13767538396034502",
        "-31591527745648281",
        "159964104901947204",
        "995085094601491"
    };

    for (int i = 0; i < K; i++) {
        printf("a%d = %s\n", K - i - 1, coeffs[i]);
    }
    printf("Constant term c = %s\n", coeffs[K-1]);

    return 0;
}
