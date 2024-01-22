#include <stdio.h>
void Permuter(double *x, double *y) {
    double temp = *x;
    *x= *y;
    *y = temp;
}

int main() {
    double z = 5.0, k = 10.0;
    printf("Av permutation : x = %.2f, y = %.2f\n", z, k);
    Permuter(&z, &k);
    printf("Ap permutation : x = %.2f, y = %.2f\n", z, k);

    return 0;
}
