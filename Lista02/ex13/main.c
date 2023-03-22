#include<stdio.h>

void main() {
   int classe, territorio, arma;

  printf("Escolha a sua classe:\n");
  printf("1 - Guerreiro\n");
  printf("2 - Mago\n");
  printf("3 - Druida\n");
  printf("4 - Sacerdote\n");
  scanf("%d", &classe);

  printf("Escolha o seu território:\n");
  printf("1 - Azeroth\n");
  printf("2 - Azkaban\n");
  printf("3 - Aurora\n");
  printf("4 - Brightwood\n");
  scanf("%d", &territorio);

  printf("Escolha a sua arma:\n");
  printf("1 - Machado cego\n");
  printf("2 - Picareta invertida\n");
  printf("3 - Adaga sem ponta\n");
  printf("4 - Corrente sem elo\n");
  scanf("%d", &arma);

  printf("Você escolheu ser ");

  switch (classe) {
    case 1:
      printf("um Guerreiro ");
      break;
    case 2:
      printf("um Mago ");
      break;
    case 3:
      printf("um Druida ");
      break;
    case 4:
      printf("um Sacerdote ");
      break;
    default:
      printf("uma classe inválida ");
      break;
  }

  printf("de ");

  switch (territorio) {
    case 1:
      printf("Azeroth ");
      break;
    case 2:
      printf("Azkaban ");
      break;
    case 3:
      printf("Aurora ");
      break;
    case 4:
      printf("Brightwood ");
      break;
    default:
      printf("um território inválido ");
      break;
  }

  printf("usando ");

  switch (arma) {
    case 1:
      printf("um Machado cego.\n");
      break;
    case 2:
      printf("uma Picareta invertida.\n");
      break;
    case 3:
      printf("uma Adaga sem ponta.\n");
      break;
    case 4:
      printf("uma Corrente sem elo.\n");
      break;
    default:
      printf("uma arma inválida.\n");
      break;
  }
}