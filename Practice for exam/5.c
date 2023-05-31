/*Дадена е текстуална датотека (livce.txt) која претставува ливче во спортска обложувалница.
На почетокот во датотеката, во посебен ред е запишана сумата на уплата (цел број).
Потоа во секој ред од датотеката е запишан по еден тип во следниот формат:
ab12 1 1.25

Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).
Ваша задача е да се испечати типот со најголем коефициент како и можната добивка на ливчето. Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.
Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    FILE * f = fopen ("livce.txt" , "r");
    int suma;
    fscanf(f,"%d",&suma);
    char shifra[10];
    int tip;
    float koef;
    float maxkoef = 0.0;
    char maxshifra[10];
    int maxtip;
    float dobivka;
    float vkKoef = 1;
    while (fscanf(f,"%s%d%f",&shifra,&tip,&koef)!= EOF)
    {
        vkKoef = vkKoef * koef;
        if (koef > maxkoef)
        {
            maxkoef = koef;
            strcpy(maxshifra,shifra);
            maxtip = tip;
        }
        dobivka = vkKoef * suma;
    }
    printf("%s %d %.1f\n",maxshifra,maxtip,maxkoef);
    printf("%.2f",dobivka);
    fclose(f);
    return 0;
}
