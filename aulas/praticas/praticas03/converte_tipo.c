#include <stdio.h>

int main(){

  char caractere = 127;
  int inteiro = caractere;
  float flutuante = inteiro;
  double duplo = flutuante;
  printf("caractere = %i\n", caractere);
  printf("inteiro = %i\n",inteiro);
  printf("float = %.7f\n", flutuante);
  printf("double = %.7f\n\n\n", duplo);

  duplo = 256.1234567;
  flutuante = duplo;
  inteiro = flutuante;
  caractere = inteiro;

  printf("caractere = %i\n", caractere);
  printf("inteiro = %i\n",inteiro);
  printf("float = %.7f\n", flutuante);
  printf("double = %.7f\n", duplo);


  return 0;
}