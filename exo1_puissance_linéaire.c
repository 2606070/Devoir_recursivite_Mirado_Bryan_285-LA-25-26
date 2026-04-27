#include <stdio.h>
#include <stdlib.h>

   unsigned int count = 0;
   unsigned int puissance_lineaire(unsigned int x, unsigned int n){
        printf("Appel %u: %u ^ %u\n", count, x, n);

        if(n==0){
            printf("return 1\n");
            count ++;
            return 1;
        }else{
            count++;
            printf("%u ^ %u = %u * %u ^ %u\n", x, n, x, x, (n-1));
            return x*puissance_lineaire(x, n-1);
            }
   }
int main(){
   unsigned int x, n;
   printf("Entrez x: ");
   scanf("%u", &x);
   printf("Entrez n: ");
   scanf("%u", &n);

   unsigned int resultat = puissance_lineaire(x, n);

    printf("\nResultat final : %u\n", resultat);
    printf("Nombre total d'appels : %u\n", count);
    return 0;
}



