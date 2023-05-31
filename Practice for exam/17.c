/*
Од тастатура се внесуваат димензиите на една матрица (m,n <= 100), а потоа и елементите од матрицата.
Да се трансформира матрицата така што средниот елемент во секоја редица ќе се замени со разликата (по апсолутна вредност) на сумата на елементите во првата половина од редицата и сумата на елементите во втората половина на редицата.
Ако матрицата има парен број колони, се менува вредноста на средните два елемента.
Средниот/те елемент/и влегува/ат во сумите (при непарен број на колони, средниот елемент влегува во двете суми!).
Да се испечати на екран променетата матрица.
*/
#include <stdio.h>
#include <math.h>
int main ()
{
    int matrix[100][100] , m , n;
    scanf("%d %d",&m,&n);
    int mid = n / 2;
    int i , j ;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            int sumM = 0 , sumAM = 0;
            scanf("%d",&matrix[i][j]);
            int tmp = j;
            if (j == n - 1)
            {
                if (n % 2 == 0)
                {
                    for (j = 0; j <= mid - 1; j++)
                    {
                        sumM += matrix[i][j];
                    }
                    for (j = mid; j < n; j++)
                    {
                        sumAM += matrix[i][j];
                    }
                }
                else
                {
                    for (j = 0; j <= mid; j++)
                    {
                        sumM += matrix[i][j];
                    }
                    for(j = mid; j < n; j++)
                    {
                        sumAM += matrix[i][j];
                    }
                }
                for (j = 0; j < n; j++)
                {
                    if (n % 2 == 0)
                    {
                        if (j == mid)
                        {
                            matrix[i][j] = fabs(sumM - sumAM);
                            matrix[i][j-1] = fabs(sumM - sumAM);
                        }
                    }
                    else if (n%2 != 0)
                    {
                        if (j == mid)
                        {
                            matrix[i][j] = fabs(sumM - sumAM);
                        }
                    }
                }
            }
           j = tmp;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
