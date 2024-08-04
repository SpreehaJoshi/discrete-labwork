#include <stdio.h>
void find_join(int m1[][10], int m2[][10], int join[][10], int m, int n) {
    int i, j;
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            join[i][j] = m1[i][j] || m2[i][j];
        }
    }
}
void find_meet(int m1[][10], int m2[][10], int meet[][10], int m, int n) {
    int i, j;
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            meet[i][j] = m1[i][j] && m2[i][j];
        }
    }
}
void find_product(int m1[][10], int m2[][10], int product[][10], int m, int n) {
    int i, j, k;
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            product[i][j] = 0;
            for (k = 0; k < n; ++k) {
                product[i][j] |= m1[i][k] && m2[k][j];
            }
        }
    }
}
int main() {
    int m1[10][10], m2[10][10], join[10][10], meet[10][10], product[10][10];
    int i,j,m, n; 
        printf("Enter the order of the matrices:\n");
        scanf("%d %d", &m, &n);
        printf("Enter the coefficients of matrix 1:\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter the coefficients of matrix 2:\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            scanf("%d", &m2[i][j]);
        }
    }
    find_join(m1, m2, join, m, n);
        printf("Join of the matrices (m1 OR m2):\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d ", join[i][j]);
        }
        printf("\n");
    }
    find_meet(m1, m2, meet, m, n);
        printf("Meet of the matrices (m1 AND m2):\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d ", meet[i][j]);
        }
        printf("\n");
    }
    find_product(m1, m2, product, m, n);
        printf("Product of the matrices (m1 * m2):\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
