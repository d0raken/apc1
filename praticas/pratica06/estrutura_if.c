#include <stdio.h>

int main() {

    int numero;
    int numero_e_divisivel_por_2; 
    int idade;
    float media;
    media = 0.0f;

    printf("Digite um numero: ");
    scanf("%i", &numero);
    numero_e_divisivel_por_2 = numero %2 == 0;

    if(numero_e_divisivel_por_2) {
        printf("O numero %i e par.\n", numero);
    } else {
        printf("O numero %i e impar.\n", numero);
    }

    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    if (idade < 16) {
        printf("Voce nao pode votar.\n");
    } else {
        if (idade < 18 || idade > 70) {
            printf("Voce pode votar.\n");
        } else {
            printf("Voce e obrigada a votar.\n");
        }
    }

    printf("Digite sua media final: ");
    scanf("%f", &media);

    if (media == 0.0f) {
        printf("A mencao e 'SR'.\n");
    } else {
        if (media >= 0.0f && media < 3.0f) {
            printf("A mencao e II.\n");
        } else {
            if (media >= 3.0f && media < 5.0f){
                printf("A mencao e MI.\n");
            } else {
                if (media >= 5.0f && media < 7.0f){
                    printf("A mencao e MM.\n");
                } else {
                    if(media >= 7.0f && media < 9.0f){
                        printf("A mencao e MS. \n");
                    } else {
                        printf("A mencao e SS.\n");
                    }
                }
            }
        }
    }

    return 0;
}