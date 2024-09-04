#include <stdio.h>

int main() {
  int numero = 0;
  printf("Digite um número inteiro: ");
  int deu_certo = scanf("%i", &numero);
  printf("Você digitou: %i\n", numero);  

  int x = 0;
  int y = 0;
  
  printf("Digite um numero para a coordenada x: ");
  int voce_digitou = scanf("%i", &x);
  printf("Digite um numero para a coordenada y: ");
  int voce_digitou_2 = scanf("%i", &y);
  printf("Você digitou: (%i, %i)\n",x,y);
  
  
  
  


  return 0;
}