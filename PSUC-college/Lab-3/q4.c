// Q4. Write a program to design a calculator that performs addition, subtraction,multiplication and division operation. This program inputs two operands and an operator and then displays the calculated result.

#include <stdio.h>

int main() {
  char op;
  float n1,n2;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%f %f", &n1, &n2);

  switch (op) {
    case '+':
      printf("%.1f + %.1f = %.1f", n1, n2, n1 + n2);
      break;
    case '-':
      printf("%.1f - %.1f = %.1f", n1, n2, n1 - n2);
      break;
    case '*':
      printf("%.1f * %.1f = %.1f", n1, n2, n1 * n2);
      break;
    case '/':
      printf("%.1f / %.1f = %.1f", n1, n2, n1 / n2);
      break;
    default:
      printf("Error! Invalid operation");
  }
  return 0;
}