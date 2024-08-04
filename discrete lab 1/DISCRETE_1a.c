#include<stdio.h>
#include<conio.h>

int main(){
    int a[5],b[5], i, j;
    printf("Enter elements of set A");
      for(i=0; i<5; i++)
       {
        scanf("%d", &a[i]);
       }
    printf("Enter elements of set B");
      for(j=0; j<5; j++)
       {
        scanf("%d", &b[j]);
       }
    printf("Cartesian Product:\n");
    printf("{");
     for(i=0; i<5; i++)
     {
        for(j=0; j<5; j++)
        {
            printf("(%d,%d)", a[i], b[j]);
            printf(",");
        }
     }
     printf("}");
return 0;
}
