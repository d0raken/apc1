#include <stdio.h>
int main(){

  char produto[21];
  int quantidade = 0;
  float valor = 0.0f;

  printf("Digite o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", produto);
  printf("Digite a quantidae de produtos: ");
  deu_certo = scanf("%i", &quantidade);
  printf("Digite o valor do produto: ");
  deu_certo = scanf("%f", &valor);

  printf("================================\n");
  printf("\t\t\tPEDIDO\t\t\t\n");
  printf("================================\n");
  printf("Produto\t\t\t Qtd Valor Unit\n");
  printf("%s\t\t\t %03i\t %.2f\n", produto, quantidade, valor);
  printf("================================\n");

  
  

  return 0;

}