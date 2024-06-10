#include <stdio.h>

int main(void) {
  int segundos, horas, minutos, segundosRestantes;

  printf("Ingrese la cantidad de segundos: ");
  scanf("%d", &segundos);

  horas = segundos / 3600;
  minutos = (segundos % 3600) / 60;
  segundosRestantes = segundos % 60;

  printf("\n%d segundos equivalen a:\n", segundos);
  printf("\n%d horas\n", horas);
  printf("\n%d minutos\n", minutos);
  printf("\n%d segundos\n", segundosRestantes);

  return 0;
}