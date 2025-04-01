#include <stdio.h>

// O programa solicita ao usuário que digite um numero inteiro representando um mês. (usar o comando if, else-if)

// Se o mês for 2, o número de dias é 28.

// Se o mês for 4, 6, 9) ou 11 é 30.

// Se o mês for 1, 3, 5, 7, 8, 10 ou 12 é 31.

int main() {
  int mes;

  printf("Digite o número do mês (1 a 12): ");

  scanf("%d", &mes);

  if (mes == 2) {
    printf("O mês tem 28 dias.\n");
  } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
    printf("O mês tem 30 dias.\n");
  } else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
    printf("O mês tem 31 dias.\n");
  } else {
    printf("Mês inválido.\n");
  }

  return 0;
}