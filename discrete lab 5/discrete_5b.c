#include<stdio.h>
#include<conio.h>
void truth_table(int p[], int q[], int r[], int s[], int n)
{
    int i, a;

    printf("P\tQ\tR\tS\t!P\tP||Q\t!P||R\tP==S\tP||Q&&!P||R&&P==S R||S P||Q&&!P||R&&P==S->R||S\n");

    for (i = 0; i < n; i++)
    {   a = (p[i] || q[i]) && ( !p[i] || r[i]);
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t\t%d\t%d\n",
               p[i], q[i], r[i], s[i], !p[i], p[i] || q[i], !p[i] || r[i], p[i] == s[i], (a && ( p[i] == s[i])), r[i] || s[i], !(a && (p[i] == s[i])) || (r[i] || s[i]));
    }
}

int main()
{
    int p[] = {1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    int q[] = {1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0};
    int r[] = {1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0};
    int s[] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    int n = sizeof(p) / sizeof(p[0]);

    truth_table(p, q, r, s, n);

    return 0;
}