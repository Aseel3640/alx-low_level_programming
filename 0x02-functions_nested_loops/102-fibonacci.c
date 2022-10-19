#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int count = 3;
long int t1 = 1, t2 = 2, nextTerm;
printf("Fibonacci Series: %ld, %ld, ", t1, t2);
nextTerm = t1 + t2;
while (count <= 50)
{
printf("%ld, ", nextTerm);
t1 = t2;
t2 = nextTerm;
nextTerm = t1 + t2;
}
return (0);
}
