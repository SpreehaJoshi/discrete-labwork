#include<stdio.h>
int sum(int);
int main(){
    int num, result;
    printf("Enter number of terms ");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum of n natural numbers is = %d", result);
}

int sum(int num){
    if (num == 1)
        return num;
    else
        return (num+sum(num-1));
}