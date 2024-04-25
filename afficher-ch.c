//- Un programme qui permet de saisir et afficher une chaîne de caractères.
 #include <stdio.h>
#include <string.h>
int main() {
  char c[100];

    //Method 1
printf("Donner une chaine de caractere:\n");
    scanf("%s",c);
    printf("%s",c);
//Method 2
      printf("Donner une chaine de caractere:");
    for(int i=0;i<10;i++){
            scanf("%c",&c[i]);

    }
    for(int i=0;i<10;i++){
            printf("%c",c[i]);

    }

//Method 3
    printf("Donner une chaine de caractere:\n");
    gets(c);
    puts(c);


     return 0;
}

