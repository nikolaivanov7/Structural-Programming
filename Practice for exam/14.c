/*Да се напише програма во која се вчитува матрица од цели броеви A со N редици и N * 2 колони (N не е поголемо од 50).
Програмата треба да ја трансформира вчитаната матрица во нова матрица B, така што сите елементи десно од N-тата колона ќе ги префрли под N-тата редица, односно од матрица со димензија N редици и 2 * N колони ќе се добие матрица со 2 * N редици x N колони.
*/
#include <stdio.h>
int main ()
{
    int n , i , j;
    scanf("%d",&n);
    int A[n][n*2];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n*2; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    int B[n*2][n];
    for (i = 0; i < n;i++)
    {
        for (j = 0; j < n; j++)
        {
            B[i][j] = A[i][j];
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        for (j = n; j < n*2; j++)
        {
            B[i][j] = A[i][j];
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
