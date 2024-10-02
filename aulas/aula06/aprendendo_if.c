#include <stdio.h>

int main() {

    float media = 0.0f;
    printf("Digite a sua media: ");
    int deu_certo = scanf("%f", &media);

    if (media >= 9.0f && media <= 10.0f) {
        printf("Sua mencao foi SS\n");
    } else {
        if (media >= 7.0f && media <= 8.9f) {
            printf("Sua mencao foi MS\n");
        } else {
            if (media >= 5.0f && media <= 6.9f) {
                printf("Sua mencao foi MM\n");
            } else {
                if(media >= 3.0f && media <= 4.9f) {
                    printf("Sua mencao foi MI\n");
                } else {
                    if( media >= 0.1f && media <= 2.9f){
                        printf("Sua mencao foi II\n");
                    } else {
                        printf("Sua mencao foi SR\n");
                    }
                }
            }
        }
    }


    return 0;
}