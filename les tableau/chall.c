#include<stdio.h>
#include<math.h>
int Carre (int x){
    return pow(x ,2);
}

void Affiche_Carre (int T[4]){
    for (int i=0 ;i <4 ;i++){
        printf("%d/n" , Carre(T[i]));

    }
}
int main(){
    int T[4];
    for (int i=0 ;i<4;i++){
        printf("enter nbr ent %d :" , i+1);
        scanf("%d/n" ,&T[i]);
    }
    Affiche_Carre (T);
    return 0;
}