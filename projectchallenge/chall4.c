#include <stdio.h>
int fact(int n) {

    if (n == 0) {
        return 0;
    } else {
        return n * fact(n - 1);
    }
}

int main() {
    int nbr;
    printf("Entrez un nombre : ");
    scanf("%d", &nbr);
    int resultat = fact(nbr);

    printf("La fact des entiers de 0 à %d est : %d\n", nbr, resultat);

    return 0;
}

