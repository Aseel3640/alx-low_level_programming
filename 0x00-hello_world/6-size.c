#include <stdio.h>
int main(void)
{
char a;
int b;
long int c;
long long d;
 printf("Size of char: %zu byte\n", sizeof(a));
 printf("Size of int: %zu bytes\n", sizeof(b));
 printf("Size of long int: %zu bytes\n", sizeof(c));
 printf("Size of long long int: %zu bytes\n", sizeof(c));
 printf("Size of float: %zu bytes\n", sizeof(d));
  return (0);
}
