//- Un programme qui calcule la distance de Hamming entre deux mots entrés par l'utilisateur.
 #include <stdio.h>
#include <string.h>
int main() {
    int d=0;
    char c1[100],c2[100];
    puts("Donner une chaine A:");
    gets(c1);
    puts("Donner une chaine B:");
    gets(c2);
    if(strlen(c1)==strlen(c2)){
       for(int i=0;c1[i]!='\0';i++){
        if(c1[i]!=c2[i]){
            d++;
        }
       }

    }else{
    puts("La  longeur de deux chaines est differents");
    }

printf("La longeur de Hamming est : %d",d);
      return 0;
}
