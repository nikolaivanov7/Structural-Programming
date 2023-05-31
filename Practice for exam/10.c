/*
Во датотеката podatoci.txt се запишани редови со низи од знаци (секој не подолг од 80 знаци).
Од стандарден влез се читаат два знака z1 и z2. Да се напише програма со која на стандарден излез ќе се испечатат поднизите од секој ред од датотеката составени од знаците што се наоѓаат меѓу z1 и z2 (без нив).
Секоја подниза се печати во нов ред.
Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2, знакот z1 секогаш се наоѓа пред знакот z2, а меѓу z1 и z2 секогаш има барем еден знак.
*/
#include <stdio.h>
#include <string.h>
void printLine (char * line , char z1 , char z2)
{
    int i , j;
    for (i = 0; i < strlen(line);i++)
    {
        if (line[i] == z1)
        {
            for (j = i+1; j < strlen(line); j++)
            {
                if (line[j] != z2)
                {
                    printf("%c",line[j]);
                }
                else
                {
                    break;
                }
            }
            printf("\n");
        }
    }
}
int main ()
{
    FILE * f = fopen ("podatoci.txt" , "r");
    char line [81];
    char z1 , z2 ;
    getchar();
    scanf("%c %c",&z1,&z2);
    while (fgets(line,81,f) != NULL)
    {
        line[strlen(line)-1] = '\0';
        if (line[0] == '#')
        {
            break;
        }
        printLine (line,z1,z2);
    }
    fclose(f);
    return 0;
}
