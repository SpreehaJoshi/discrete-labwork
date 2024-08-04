#include<stdio.h>
#define size 100
int main() {
    int n,i;
    float a[size], b[size];
    int s1[size], s2[size];
    printf("Enter the number of elements in the fuzzy sets: ");
    scanf("%d", &n);
    printf("Enter the elements and membership values for fuzzy set A:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d%f", &s1[i],&a[i]);
    }
    printf("Enter the elements and membership values for fuzzy set B:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d%f", &s2[i],&b[i]);
    }
    printf("Union of fuzzy sets A and B:\n");
    for (i = 0; i < n; i++)
    {
        if(a[i] >= b[i])
        {
            printf("%f/%d\t", a[i],s1[i]);
        }
        else
        {
            printf("%f/%d\t", b[i],s1[i]);
        }
    }
    printf("\n\n");
    printf("Intersection of fuzzy sets A and B:\n");
    for (i = 0; i < n; i++)
    {
        if(a[i] <= b[i])
        {
            printf("%f/%d\t", a[i],s2[i]);
        }
        else
        {
            printf("%f/%d\t", b[i],s2[i]);
        }
    }printf("\n\n");
    printf("Complement of fuzzy set A:\n");
    for (i = 0; i < n; i++) {
        printf("%f/%d\t", 1 - a[i],s1[i]);
    }
    printf("\n\n");
    printf("Complement of fuzzy set B:\n");
    for (i = 0; i < n; i++) {
        printf("%f/%d\t", 1 - b[i],s2[i]);
    }
    printf("\n");
    return 0;
}