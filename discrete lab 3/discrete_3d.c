// #include <stdio.h>
// int gcd(int a, int b)
// {
//  if(a == 0)
//     return b;
//     return gcd(b % a, a);
// }
// int main()
// {
//  int a = 10, b = 15;
//     printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
//  a = 35, b = 10;
//     printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
//  a = 31, b = 2;
//     printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
//  return 0;
// }

#include <stdio.h>
int gcdExtended(int a, int b, int* x, int* y)
{
 if(a == 0) {
    *x = 0;
    *y = 1;
    return b;
}
 int x1, y1;
 int gcd = gcdExtended(b % a, a, &x1, &y1);
    *x = y1 - (b / a) * x1;
    *y = x1;
 return gcd;
}
int main()
{
 int x, y;
 int a = 35, b = 15;
 int g = gcdExtended(a, b, &x, &y);
    printf("gcd(%d, %d) = %d", a, b, g);
 return 0;
}