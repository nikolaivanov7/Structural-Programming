/*
За квадратна матрица А со димензии n x n, од стандарден влез се внесува бројот n (n > 2) и елементите на матрицата (реални броеви).
Нека X e збирот од елементите под главната дијагонала во матрицата А. Нека Y е збирот од елементите под споредната дијагонала во матрицата А.
Да се креира нова матрица B на следниот начин:
сите елементи од главната дијагонала во матрицата B треба да имаат вредност X
сите елементи од споредната дијагонала во матрицата B треба да имаат вредност Y
ако даден елемент припаѓа и на главната и на споредната дијагонала во матрицата B, тогаш неговата вредност e X+Y
сите останати елементи во матрицата B имаат вредност 0
Новата матрица B да се испечати на стандарден излез.
*/
#include <stdio.h>
int main ()
{
    float a[100][100];
    int n , i , j;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    float x = 0 , y = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i > j)
            {
                x = x + a[i][j];
            }
            if (i + j >= n)
            {
                y = y + a[i][j];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                a[i][j] = x;
            }
            if (i + j == n - 1)
            {
                a[i][j] = y;
            }
            if (i==j && i+j == n-1)
            {
                a[i][j] = x + y;
            }
            if (i != j && i+j != n-1)
            {
                a[i][j] = 0;
            }
             printf("%.1f ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
