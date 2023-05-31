/*
Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата.
Да се генерира низа (со најмногу m) така што секој елемент од низата се добива со наоѓање на елементот во секоја редица од матрицата што е најоддалечен од аритметичката средина во рамки на таа редица.
Ако постојат повеќе елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот.
Редоследот на запишување на елементите во низата одговара на редоследот на редиците.
*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i , j , m , n;
    int matrix[100][100];
    int a[100];
    scanf("%d%d",&m,&n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int sumRow = 0;
    int arDiff;
    int maxEl , maxRaz , flag;
    for (i = 0; i < m ; i++)
    {
        sumRow = 0;
        for (j = 0; j < n;j++)
        {
            sumRow += matrix[i][j];
        }
        arDiff = sumRow / n;
        if (arDiff % 2 != 0)
        {
            arDiff = arDiff + 1;
        }
        flag = 1;
        for (j = 0; j < n; j++)
        {
            if (flag)
            {
                maxEl = matrix[i][j];
                maxRaz = abs(maxEl - arDiff);
                flag = 0;
            }
            if (abs(matrix[i][j] - arDiff) > maxRaz)
            {
                maxEl = matrix[i][j];
                maxRaz = abs(matrix[i][j] - arDiff);
            }
        }
        a[i] = maxEl;
    }
    for (i = 0; i < m; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
