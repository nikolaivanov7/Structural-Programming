/*
Да се напише рекурзивна функција за наоѓање на максималната цифра од даден цел број.
Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број.
За секој од нив да се испечати максималната цифра во посебен ред.
*/
#include <stdio.h>
int recursive (int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        int lastdigit = n % 10;
        if (lastdigit > recursive(n/10))
        {
            return lastdigit;
        }
        else
        {
            return recursive(n/10);
        }
    }
}
int main ()
{
    int n;
    while (scanf("%d" , &n))
    {
        printf("%d\n",recursive(n));
    }
    return 0;

}
