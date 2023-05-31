Од стаднарден влез се читаат N низи од знаци (стрингови) не подолги од 80 знаци.
На почетокот на програмата се читаат два цели броеви:
N - бројот на низи од знаци кои ќе се читаат и
X - поместување.
Секоја од вчитаните низи од знаци треба да се трансформира на тој начин што секоја од малите и големите букви (a-z, A-Z) се заменува со истата буква поместена X места понапред во азбуката (a-z). 
Ако се надмине опсегот на буквите во азбуката, се продолжува циклично од почетокот на азбуката. Трансформираната низа да се отпечати на СИ.
Трансформацијата да се имплементира со посебна рекурзивна функција.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
void cleanstring (char * str)
{
    if (str[strlen(str)-1] == '\n')
    {
        str[strlen(str)-1] = '\0';
    }
}
void transform (char * line , int x)
{
    if(*line == '\0')
    {
        return ;
    }
    if(isalpha(*line))
    {
        if(islower(*line))
        {
            *line = ((int)*line + x - 'a') % 26 + 'a';
        }
        else
        {
            *line = ((int)*line + x - 'A') % 26 + 'A';
        }
    }
    transform(line + 1 , x);
}
int main ()
{
    int n , x;
    int i;
    scanf("%d %d\n",&n,&x);
    for (i = 0 ; i < n; i++)
    {
        char line[81];
        fgets(line,sizeof(line),stdin);
        cleanstring(line);
        transform(line,x);
        puts(line);
    }
    return 0;
}
