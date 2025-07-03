#include <stdio.h>

int main()
{

  // torre linha reta horizontal e vertical
  printf("=== Movimento da Torre ===\n");

  for (int i = 1; i <= 5; i++)
  {
    printf("Direita\n");
  }

  // bispo diagonal 5 casas cima e direita
  printf("\n=== Movimento do Bispo ===\n");

  int i = 1;
  while (i <= 5)
  {
    printf("Cima Direita\n");
    i++;
  }

  // rainha
  printf("\n=== Movimento da Rainha ===\n");

  int r = 1;
  do
  {
    printf("Esquerda\n");
    r++;

  } while (r <= 8);

  // cavalo duas casas baixo e uma esquerda
  printf("\n=== Movimento do cavalo ===\n");
  for (int i = 1; i <= 1; i++)
  {
    int movimento = 1;

    while (movimento <= 2)
    {
      printf("(Baixo)\n", movimento++);
    }
    printf("(Esquerda)\n");
  }

  return 0;
}