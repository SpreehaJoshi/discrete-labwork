#include<stdio.h>
float complmnt(float [], float []);

int main(){
  int i, j, b[5], d[5];
  float a[5], c[5], compA, compB;
  printf("Enter a/b for set A");
  for (i=0; i<5; i++)
    scanf("%f", &a[i]);
  for (i=0; i<5; i++)
    scanf("%d", &b[i]);
  
  printf("Enter c/d for set B");
  for (j=0; j<5; j++)
    scanf("%f", &c[j]);
  for (j=0; j<5; j++)
    scanf("%d", &d[j]);

  // for (i=0; i<5; i++)
  //   printf("set A = %f / %d ", a[i], b[i]);
  // for (j=0; j<5; j++)
  //   printf("set B = %f / %d ", c[j], d[j]);

  // complement
  complmnt(a,c);
  printf("Complement of set A and B are %f\n%f", compA, compB);
}

float complmnt(float a[5], float c[5]){
  int i, j;
  float compA, compB;
  for (i=0; i<5; i++)
  compA = 1 - a[i];

  for (j=0; j<5; j++)
  compB = 1- c[j];
}