#include <stdio.h>

int main()
{

  // torre linha reta horizontal e vertical
  printf("=== Movimento da Torre ===\n");

  for (int i = 1; i <= 5; i++)
  {
    printf("Torre -> Casa %d: Direita\n\n", i);
  }

  // bispo diagonal 5 casas cima e direita
  printf("\n=== Movimento do Bispo ===\n");

  int i = 1;
  while (i <= 5)
  {
    printf("Bispo -> Casa %d: Cima, Direita\n\n", i);
    i++;
  }

  // rainha
  printf("\n=== Movimento da Rainha ===\n");

  int r = 1;
  do
  {
    printf("Rainha -> Casa %d: Esquerda\n\n", r);
    r++;

  } while (r <= 8);
  return 0;
}