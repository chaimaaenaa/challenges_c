#include <stdio.h>

int main() {
    int nl, i, j;
    printf("Enter le nombre de lignes : ");  
    scanf("%d", &nl);
    for (i = 0; i < nl; i++) {
        for (j = 0; j < nl; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
