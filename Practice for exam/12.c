/*
Да се напише рекурзивна функција која ќе го најде бројот на позитивни броеви од целобројна низа.
Функцијата како аргумент ја прима низата, за која се бара бројот на позитивни броеви и вкупниот број на елементи, кои ги има таа низа.
*/
#include <stdio.h>
int brojPozitivni (int * niza, int n , int i)
{
    int counter = 0;
    for (i = 0; i < n; i++)
    {
        if (niza[i] > 0)
        {
            counter++;
        }
    }
    return counter;
}
int main ()
{
   int a[100];
   int i , n;
   scanf("%d",&n);
   for (i = 0; i < n; i++)
   {
       scanf("%d",&a[i]);
   }
   printf("%d",brojPozitivni(a,n,0));
}
