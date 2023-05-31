/*Дадена е текстуална датотека text.txt.
Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во датотеката.
Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви.
Потоа во нов ред се печати бројот на појавувања на паровите самогласки.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main ()
{
    int i, counter = 0;
    FILE * f = fopen ("text.txt", "r");
    char line[1000];
    while (fgets(line,1000,f) != NULL)
    {
        line[strlen(line)-1] = '\0';
        for (i = 0; i < strlen(line); i++)
        {
            if (isalpha(line[i]) && isalpha(line[i+1]))
            {
                line[i] = tolower(line[i]);
                line[i+i] = tolower(line[i+1]);
                if((line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u') && (line[i+1] == 'a' || line[i+1] == 'e' || line[i+1] == 'i' || line[i+1] == 'o' || line[i+1] == 'u'))
                {
                    printf("%c%c\n",line[i],line[i+1]);
                    counter++;
                }

            }
        }
    }
    printf("%d",counter);
    fclose(f);
    return 0;
}
