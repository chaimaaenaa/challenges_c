/*#include <stdio.h>
#include <stdbool.h>
bool prem(int nbr){
   if (number <=1 ){
    return false ;
   }
   for (int i =2 ; i * i <= number ;i++){
     if(number % i == 0){
        return false ;
     }
     return true;

   }
    }

int main(){
   int num = 20 ;
   bool result = premier(num);
   if (result){
    printf("%d est un nombre premier .\n", num);

   }else{
      printf("%d ne pas un nbr premier .\n" , num );
   }
    
     
    return 0;
}*/
#include <stdio.h>
#include <stdbool.h>

bool isPremier(int x)
{
    int c;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int nbr;
    printf("Entez un nombre : ");
    scanf("%d", &nbr);
    if (!isPremier(nbr))
    {
        printf("le nombre %d est premier.", nbr);
    }
    else
    {
        printf("le nombre %d est non premier.", nbr);
    }
    return 0;
}
