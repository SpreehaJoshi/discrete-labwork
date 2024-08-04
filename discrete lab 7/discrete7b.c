//to generate permutations of number
#include<stdio.h>
#include<string.h>
#define m 10
void permut(int *num, int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d", num[i]);
    }
    printf("\n");
}
int main(){
     int num[m];
    int *ptr;
    int temp, i, n, j;
    printf("\n how many numbers do you want to enter");
    scanf("%d", &n);
    printf("enter list of numbers to see all possible permutations");
    for(i=n; i>0; i--)
    scanf("%d", &num[i]);
    for(j=n; j>1; j--)
    {
        for(i=n; i>1; i--)
        {
            temp = num[i];
            num[i] = num[i-1];
            num[i-1] = temp;
            permut(num,n);
        }
    }
    return 0;
}
