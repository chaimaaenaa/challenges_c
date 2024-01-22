#include <stdio.h>
#include <stdbool.h>

int isValide(int n){
     while(n<=1){
       printf("entrer un nbr valide");
       scanf("%d",&n);
}
}
bool isPremier(int n){
   int sum=0;
   isValide(n);

           for(int i=1;i<n;i++){
               if(n%i==0){
               sum++;
            }
        }
        if(sum==1)
        return true;
        else
        return false;

}
int main(){
    int n;
    printf("entrer un nombre:");
    scanf("%d",&n);
    if(isPremier(n))
    {
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}