//- Un programme qui affiche les caractères d'une chaîne dans l'ordre inverse.
 #include <stdio.h>
#include <string.h>
int main() {
     char *c;
     puts("Donner une chaine :");
     gets(c);
     for(int i=strlen(c)-1;i>=0;i--){
         printf("%c",c[i]);

     }

      return 0;
}
