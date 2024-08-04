#include<stdio.h>

int main(){
    int i, j, n1, n2, noc=0, count=0;
    int a[i][j];
    printf("Enter size of matrix");
    scanf("%d %d", &n1, &n2);
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
        printf("Enter element of matrix A");
        scanf("%d", &a[i][j]);
        }
    }
for(i=0; i<n1; i++){
 if(a[i][j]==0)
  count++;
 else
  noc++;
}
if(count>noc)
 printf("It is sparse");
else
printf("It isn't sparse");
}