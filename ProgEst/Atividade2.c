#include <stdio.h>

// O programa calcula a soma dos quadrados dos primeiros números.

// Por  exemplo, se n = 5 o valor da soma deve ser 55, pois 55 = 12 + 22 + 32 + 42 +52.

// você deve usar while, do-while ou for.

int main() {
  int n, soma = 0;

  printf("Digite um número inteiro positivo: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    soma += i * i;
  }

  printf("A soma dos quadrados dos %d primeiros números inteiros é: %d\n", n, soma);

  return 0;
}