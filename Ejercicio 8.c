#include <stdio.h>

int main(void) {
  float radio;
  float circunferencia;

  printf("Ingresa el radio del círculo: ");
  scanf("%f", &radio);

  circunferencia = 2 * 3.14159 * radio;

  printf("\nLa circunferencia del círculo es: %.2f\n", circunferencia);

  return 0;
}