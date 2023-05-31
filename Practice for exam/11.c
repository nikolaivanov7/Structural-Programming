#include <stdio.h>
#include <string.h>
#include <ctype.h>
void sort (int *line , int size)
{
    int i , j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (line[j] > line[j + 1])
            {
                int tmp = line[j];
                line[j] = line[j+1];
                line[j+1] = tmp;
            }
        }
    }
}
int main ()
{
    FILE * f = fopen ("input.txt","r");
    char line[100];
    while (fgets(line,100,f) != NULL)
    {
        int newLine[101] , counter = 0 , newCount = 0;
        line[strlen(line)-1] = '\0';
        for (int i = 0; i < strlen(line);i++)
        {
            if (isdigit(line[i]))
            {
                counter++;
                newLine[newCount] = line[i] - '0';
                newCount++;
            }
        }
        sort(newLine,newCount);
        printf("%d:",counter);
        for (int i = 0; i < newCount; i++)
        {
            printf("%d",newLine[i]);
        }
        printf("\n");
    }
    fclose(f);
    return 0;
}
