//wap to generate combinations of number
#include<stdio.h>
#include<string.h>
#define m 10
void print (int *num, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d", num[i]);
    }
        printf("\n");
    
}
int main()
{
    int num[m];
    int *ptr ;
    int temp,i,n,j;
    printf("\n How many numbers do you want to enter");
    scanf("%d",&n);
    printf("Enter list of numbers to see all possible combinations");
    for(i=0;i<n;i++)
     scanf("%d",&num[i]);
    for(j=1;j<n;j++)
    {
        for(i=0;i<n-1;i++)
        {
            temp=num[i];
            num[i]=num[i+1];
            num[i+1]=temp;
            print(num,n);
        }
    }
    return 0;
}