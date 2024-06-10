#include <stdio.h>

int main(void) {
  float lado1, lado2, lado3, perimetro;

  printf("Ingrese la longitud del primer lado del triángulo: ");
  scanf("%f", &lado1);

  printf("\nIngrese la longitud del segundo lado del triángulo: ");
  scanf("%f", &lado2);

  printf("\nIngrese la longitud del tercer lado del triángulo: ");
  scanf("%f", &lado3);

  perimetro = lado1 + lado2 + lado3;

  printf("\nEl perímetro del triángulo es: %.2f\n", perimetro);

  return 0;
}