#include <stdio.h>

int main() {
  
long int matricula = 0;
float a1 = 0.0f;
float a2 = 0.0f;
float media = 0.0f;

printf("Digite sua matrícula: ");
int deu_certo = scanf("%li", &matricula);
printf("Digite a primeia nota: ");
deu_certo = scanf("%f", &a1);
printf("Digite a segunda nota: ");
deu_certo = scanf("%f", &a2);
media = (a1 + a2)/2;
printf("Matricula\t A1\t\t A2\t\t Media\n");
printf("%li\t %.2f\t %.2f\t %.2f\n", matricula, a1, a2, media);


  



return 0;
}