#include<stdio.h>
#include<conio.h>
void truth_table(int p[], int q[], int n)
{
    int i, count = 0, a[n], b[n];

    printf("P\tQ\t!P\t!Q\tP->Q\tP->!Q\tP->Q&&P->!Q<=>!P\n");

    for (i = 0; i < n; i++)
    {
        a[i] = !p[i] || q[i];
        b[i] = !p[i] || !q[i];
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
               p[i], q[i], !p[i], !q[i], a[i], b[i], a[i] && b[i]);
        if((a[i] && b[i]) == !p[i])
            count++;
    }
    if(count == 4)
        printf("Equal");
    else
     printf("Not Equal");
}

int main()
{
    int p[] = {0, 0, 1, 1};
    int q[] = {0, 1, 0, 1};
    int n = sizeof(p) / sizeof(p[0]);

    truth_table(p, q, n);

    return 0;
}