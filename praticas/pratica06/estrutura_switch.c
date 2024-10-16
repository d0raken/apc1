#include <stdio.h>

int main() {

    int nota;
    printf("Digite o valor da nota: ");
    scanf("%i", &nota);
    switch(nota){
        case 1: printf("Voce ganhou '*'.\n");
        case 2: printf("Voce ganhou '**'.\n");
        case 3: printf("Voce ganhou '***'.\n");
        case 4: printf("Voce ganhou '****'!\n");
        case 5: printf("Voce ganhou '*****'\n");
        default:  
    }



    return 0;
}