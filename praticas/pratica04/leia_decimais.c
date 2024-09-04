#include <stdio.h>

int main(){
  float preco = 0.0f;
  double numero_grande = 0.0f;
  double fracao = 0.0f;
  
  

  printf("Digite o preço do produto: ");
  float lendo_variavel_preco = scanf("%f", &preco);
  printf("O preço digitado do produto foi: R$%.2f\n", preco);
  
  
  /// Para ler doubles eu coloco lf 
  printf("Digite um numero com muitos numero depois da casa decimal: ");
  double lendo_numero_double = scanf("%lf", &numero_grande);
  printf("O número digitado foi: %lf\n", numero_grande);

  /// Trabalhando com a terceira variável 
  printf("Digite uma fração: ");
  double lendo_fracao = scanf("%lf", &fracao);
  printf("A fração que você digitou foi: %lf", fracao);
  
  
  

  return 0;
}