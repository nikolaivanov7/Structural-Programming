/* Во дадена датотека dat.txt да се најде најдолгиот ред во кој има барем 2 цифри.
На стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед.
Доколку има повеќе такви редови се печати последниот. Се претпоставува дека ниту еден ред на датотеката не е подолг од 100 знаци.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main ()
{
    FILE * f = fopen ("dat.txt","r");
    char line[101];
    char maxline[101];
    int i;
    int counterCifri = 0 , counterLine = 0 , prvaCif , poslCif , flag = 1 , prv , posl , max = 0;
    while (fgets(line,101,f) != NULL)
    {
        line[strlen(line)-1] = '\0';
        flag = 1;
        for (i = 0; i < strlen(line);i++)
        {
            if (isdigit(line[i]))
            {
                if (flag)
                {
                prvaCif = i;
                counterCifri++;
                flag = 0;
                }
            else
            {
                counterCifri++;
                poslCif  =  i;
            }
            }
            counterLine++;
        }
        if (counterCifri > 1 && counterLine >= max)
        {
            max = counterLine;
            strcpy (maxline,line);
            prv = prvaCif;
            posl = poslCif;
        }
        counterCifri = counterLine = 0;
    }
    for (i = prv; i <= posl; i++)
    {
        printf("%c",maxline[i]);
    }
    fclose(f);
    return 0;
}
