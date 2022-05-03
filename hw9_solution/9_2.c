# include <stdio.h>

int main(void){
  int fahrenheit;
  float celsius;

  printf("Enter the Fahrenheit degree: \n");
  scanf("%d", &fahrenheit);

  celsius = 5.0 / 9.0 * (fahrenheit - 32);

  printf("the Celsius degree is %10.3f\n", celsius);
}
