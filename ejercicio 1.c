#include<stdio.h>
int main()
{

    char operator;
    double firstNumber, secondNumber;
    
    printf("ingrese un operador( + , - , * , /) : ");
    scanf("%c" , &operator);
    
    printf("ingrese dos operandos:  ");
    scanf("%lf %lf", &firstNumber, &secondNumber);
    
    switch (operator) {
      case '+':
        printf("%.lf + %.lf = %.lf\n", firstNumber, secondNumber, firstNumber + secondNumber);
      case '-':
        printf("%.lf - %.lf = %.lf\n", firstNumber, secondNumber, firstNumber - secondNumber);
      case '*':
        printf("%.lf * %.lf = %.lf\n", firstNumber, secondNumber, firstNumber * secondNumber);
      case '/':
        printf("%.lf / %.lf = %.lf\n", firstNumber, secondNumber, firstNumber / secondNumber);
        break;
      default:
      printf("el operador no es correcto");
    } 
    return 0;
} 