#include<stdio.h>
#include<conio.h>
void truth_table(int p[], int q[], int n)
{
    int i;

    printf("P\tQ\t!P\t!Q\tP && Q\tP || Q\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",
               p[i], q[i], !p[i], !q[i], p[i] && q[i], p[i] || q[i]);
    }
}

int main()
{
    int p[] = {0, 0, 1, 1};
    int q[] = {0, 1, 0, 1};
    int n = sizeof(p) / sizeof(p[0]);

    truth_table(p, q, n);

    return 0;
}