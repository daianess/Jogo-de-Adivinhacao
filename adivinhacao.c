#include <stdio.h>

int main()
{
  printf("*************************************\n");
  printf("* Bem-vido ao Jogo de Adivinhação *\n");
  printf("*************************************\n");

  int numeroSecreto = 42;

  int chute;
  printf("Qual é o seu chute? ");
  scanf("%d", &chute);
  printf("Você chutou o número %d!\n", chute);

 int acertou = chute == numeroSecreto;
  if (acertou)
  {
    printf("Parabéns! Você acertou.\n");
    printf("Jogue de novo, você é um bom jogador!\n");
  }
  else
  {
    printf("Que pena, você errou.\n");
    printf("Mas não desanime, tente de novo!\n");

    if (chute > numeroSecreto)
    {
      printf("Seu chute foi maior do que o número secreto!\n");
    }
    if (chute < numeroSecreto)
    {
      printf("Seu chute foi menor do que o número secreto!\n");
    }
  }
}
