//Во дадена датотека “broevi.txt” се запишани повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1) што означува колку броеви следуваат по него во тој ред.
//Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита 0.
#include <stdio.h>
#include <string.h>
#define MAX 100
int delitel (int n)
{
    int counter = 0;
    while (n != 0)
    {
        n /= 10;
        counter++;
    }
    int i , max = 1;
    for (i = 1; i < counter; i++)
    {
        max *= 10;
    }
    return max;
}
int main ()
{
    FILE * f = fopen ("broevi.txt" , "r");
    int numbers[100];
    int n;
    while (scanf(f,"%d",&n) && n != 0)
    {
        int i , maxbr;
        int max = 0;
        for (i = 0 ; i < n; i++)
        {
            fscanf(f,"%d",&numbers[i]);
        }
        for (i = 0; i < n; i++)
        {
            int naj = numbers[i] / delitel (numbers[i]);
            if (naj > max)
            {
                max = naj;
                maxbr = numbers[i];
            }
        }
        printf("%d\n",maxbr);
    }
    fclose(f);
    return 0;
}
