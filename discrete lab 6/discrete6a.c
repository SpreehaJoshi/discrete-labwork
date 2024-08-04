#include<stdio.h>
int powr(int, int);
int main(){
    int base, power, result;
        printf("Enter base number");
        scanf("%d", &base);
        printf("Enter power");
        scanf("%d", &power);
        result = powr(base, power);
        printf("%d ^ %d = %d", base, power, result);        
}

int powr(int base, int power){
    if(power != 0)
        return(base*powr(base, power-1));
    else
        return 1;
}