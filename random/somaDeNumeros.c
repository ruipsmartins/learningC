#include <stdio.h>

int add(int a, int b, int c)
{
  int result = a + b + c;
  return result;
}

int main()
{
  printf("a soma é: %i \n", add(2, 2, 3));
}
