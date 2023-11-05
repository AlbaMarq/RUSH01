#include <unistd.h>
#include <stdio.h>
// Dividir el string recibido como parametros de entrada en 4 strings para cada columna y fila
char split(char str[]) 
{
    int i;
    int j;
    char str1[5];
    char str2[5];
    char str3[5];
    char str4[5];

    i = 0;
    j = 0;
    while (i < 32 && j < 16)
    {
        //printf("Para el i: %d, y j: %d, el valor %c\n", i, j, str[i]);
        if (i < 7 && j < 4)
            str1[j] = str[i];
        else if (i > 7 && i < 15 && j < 8)
            str2[j - 4] = str[i]; 
        else if (i > 15 && i < 23 && j < 12)
            str3[j - 8] = str[i];
        else if (i > 23 && i < 31 && j < 16)
            str4[j - 12] = str[i];
        i = i + 2;
        j++;
    }
    str1[4] = '\0';
    str2[4] = '\0';
    str3[4] = '\0';
    str4[4] = '\0';
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);
    printf("%s\n", str4);

    return (str1[4]);
}

int main(int argc, char **argv)
{
    split(argv[1]);
    return (0);
}