#include <stdio.h>
void bonjour(const char *nom) {
    printf("Bonjour, %s\n", nom);
}

int main() {
    char nom[20];  
    printf("Entrez votre nom : ");
    scanf("%s", nom);
    bonjour(nom);

    return 0;
}
