#include <stdio.h>

float div(float a, float b);
float add(float a, float b);
float sub(float a, float b);
float mult(float a, float b);

int main() {
  float a;
  float b;
  char choice;

  printf("Please enter an number: ");
  scanf("%f", &a);
  printf("\n");
  
  printf("Please enter another number: ");
  scanf("%f", &b);
  printf("\n");

  printf("Now please enter the symbol corresponding to the operation you want: ");
  scanf(" %c", &choice);
  printf("\n");

  switch(choice) {
  case '/': switch((int)b) {
    case 0: printf("Can't divide by zero.");
      break;
    default: printf("%f\n", div(a, b));
      break;
    }
    break;
  case '+': printf("%f\n", add(a,b));
    break;
  case '-': printf("%f\n", sub(a, b));
    break;
  case '*': printf("%f\n", mult(a, b));
    break;
  default: printf("error: Invalid Operator");
    return 1;
  }
  
}

float div(float a, float b) {
  float c;

  c = a / b;

  return c;
}

float add(float a, float b){
  float c;

  c = a + b;

  return c;
}

float sub(float a, float b){
  float c;

  c = a - b;

  return c;
}

float mult(float a, float b){
  float c;

  c = a * b;

  return c;
}
