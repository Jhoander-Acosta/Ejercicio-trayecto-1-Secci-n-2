#include <stdio.h>

int main() {
  float base, altura, area;

  printf("Ingrese la base del triángulo: ");
  scanf("%f", &base);

  printf("\nIngrese la altura del triángulo: ");
  scanf("%f", &altura);

  area = (base * altura) / 2;

  printf("\nEl área del triángulo es: %.2f\n", area);

  return 0;
}