#include<stdio.h> 
#include<math.h>
int main(){
    float number;
    float floor_val, Ceil_val;
    printf("Enter a decimal value ");
    scanf("%f", &number);
    floor_val = floor(number);
    Ceil_val = ceil(number);
    printf("Floor value = %f\nCeiling Value = %f", floor_val, Ceil_val);
    return 0;
}