#include <stdio.h>
#include <stdbool.h>

bool estImpair(int nb)
{
    if (nb % 2 != 0)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int nb;
    printf("Entrez un nombre:");
    scanf("%d", &nb);
    if (estImpair(nb))
    {
        printf("Le nombre %d est impair.", nb);
    }
    else{
       printf("Le nombre %d est pair.", nb); 
    }
}