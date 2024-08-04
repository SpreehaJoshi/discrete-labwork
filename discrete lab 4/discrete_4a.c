#include<stdio.h>
#include<string.h>
int main(){
    int a[100],b[100],sum[200];
    int ac = 0,bc = 0,sc = 0;
    int reminder = 0, i;
    char num1[100], num2[100], *pa, *pb;
        printf("Enter first number : ");
        scanf("%s", &num1);
        printf("\nEnter second number : ");
        scanf("%s", &num2);
    pa = num1;
    pb = num2;
 while(*pa){
    a[ac++] = *pa++ - 48;
 }
 while(*pb){
    b[bc++] = *pb++ - 48;
 }
 if(ac < bc){
  for(i = ac;i > 0;i--){
    sum[sc++]= ((a[i-1] + b[--bc]) + reminder)%10;
    reminder = ((a[i-1] + b[bc]) + reminder)/10;
 }
 while(bc>0){
    sum[sc++] = b[--bc] + reminder;
    reminder = 0;
 }
 }
 else{
 for(i = bc; i > 0;i--){
    sum[sc++] = ((b[i-1] + a[--ac]) + reminder)%10;
    reminder = ((b[i-1] + a[ac]) + reminder)/10;
 }
 if(ac==0 && reminder==1)
    sum[sc++] = reminder;
 while(ac > 0){
    sum[sc++] = a[--ac] + reminder;
    reminder = 0;
 }
 }
        printf("Sum of both number is : ");
        for(i = sc-1;i >= 0;i--){
        printf("%d", sum[i]);
 }
 return 0;
}