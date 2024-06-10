#include <stdio.h>

int main(void) {
  int lado;
  printf("Introduce la longitud de un lado del cuadrado: ");
  scanf("%d", &lado);
  int perimetro = lado * 4;
  printf("\nEl perimetro del cuadrado es: %d\n", perimetro);
  return 0;
}