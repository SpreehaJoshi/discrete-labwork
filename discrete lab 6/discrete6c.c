#include<stdio.h>
int modd(int, int);
int main(){
    int dividend, divisor, result;
    printf("Enter dividend");
    scanf("%d", &dividend);
    printf("Enter divisor");
    scanf("%d", &divisor);
    result =  modd(dividend, divisor);
    printf("%d mod %d = %d", dividend, divisor, result);
}
int modd(int dividend, int divisor){
    if (dividend<divisor)
        return dividend;
    else if (dividend>=divisor)
        return modd((dividend-divisor), divisor);
}