#include <stdio.h>

int main (){
   char nome;
   int idade;

    printf ("Digite seu nome: ");
    scanf ("%s", &nome);
    printf ("Digite sua idade: ");
    scanf ("%d", &idade);

        if (idade >= 16)
            printf ("Você pode votar!\n");
            else
            printf ("Você não pode votar!\n");

return 0;
}
