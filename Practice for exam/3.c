/*Од тастатура во низа се внесуваат N позитивни цели броеви (N <= 100), а потоа се внесува и цел број ind (ind >= 0).
Да се напише функција sum_pos која ја прима низата, бројот ind (кој претставува индекс во низата) и бројот на валидни елементи во низата.
Функцијата треба да врати сумата на сите елементи почнувајќи од дадениот индекс ind па се до крајот на низата. Ако индексот ind е поголем од Nфункцијата треба да врати 0.
*/
#include <stdio.h>
int sum_pos (int * a, int n , int ind)
{
    int suma = 0 , i;
    for (i = ind; i < n; i++)
    {
        suma += *(a+i);
    }
    return suma;
}
int main ()
{
    int a[100];
    int n , ind , i;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&ind);
    printf("%d" ,sum_pos(a,n,ind));
    return 0;
}