//to generate random numbers using probability distribution function
#include<stdio.h>
#include<string.h>
#include<math.h>
int N = 10;
int main(int argc, int **argv){
    int p=0, i;
     for(i=0; i<N; i++){
        p = rand()%400;
        if(p>360)
        printf("0");
        else if(p<0)
        printf("0");
        else
        printf("%f\n", p*0.1/360);
    }
    printf("...");
 return 0;
}