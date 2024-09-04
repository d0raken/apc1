#include <stdio.h>

int main() {
  char tecla = '\0';
  ///char nome = '\0';
  
  
  
  printf("Pressione uma tecla e depois pressione Enter. ");
  int lendo_caractere = scanf("%c", &tecla);
  getchar();
  printf("A tecla que você pressionou foi: %c\n", tecla);

  char nome[31];
  printf("Digite seu nome: ");
  lendo_caractere = scanf("%[^\n]s", nome);
  printf("Seu nome é: %s\n", nome);
  
  
  
  
  


  return 0;
}