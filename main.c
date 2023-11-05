#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int val_input(char str[]);
char split(char str[]);
int val_four(char str1[5], char str2[5], char str3[5], char str4[5]);

int main(int argc, char **argv)
{
    //int array[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    char str1[5];
    char str2[5];
    char str3[5];
    char str4[5];
    if (argc == 2)
    {
        if (val_input(argv[1])) 
        {
            write(1, "Wrong number", 12);
            //write(1, "\n", 1);
            return (0);
        }
        str1[5], str2[5], str3[5], str4[5] = split(argv[1]);
        if (val_four(str1[5], str2[5], str3[5], str4[5]))
        {
            write(1, "Input error, only one 4 per row/col", 36);
            //write(1, "\n", 1);
            return (0);
        }

    }
    else
        write(1, "Error, more than 1 argument", 27);
    return (0);
}