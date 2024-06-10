#include<stdio.h>
int main()
{

  char nombre[20];
  
  printf("ingrese su nombre: ");
  scanf("%s", &nombre);
  
  printf("\n");
  printf("buenos días: %s", nombre);
  
  return 0;
}