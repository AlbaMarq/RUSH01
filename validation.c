#include <unistd.h>
#include <stdio.h>

// Comprobar que no se han introducido mas de 16 numeros
int val_input_len(char str[]) 
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (i > 30)
        {
            return (1);
        }
        i++;
    }
    return (0);
}

// Comprobar que los numeros introducidos esten entre 1 y 4
int val_input_num(char str[])
{
    int i;

    // Mostrar por pantalla la entrada recibida
    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);

    i = 0;
    while (str[i] != '\0' && i < 32)
    {
        if ((str[i] < '1' || str[i] > '4'))
        {
            return (1);
        }
        i = i + 2;
    }
    return (0);
}

int val_four_row(char str1[5], char str2[5])
{
    int i;
    int four;

    i = 0;
    four = 0;
    while (str1[i] != '\0')
    {
        if (str1[i] == '4')
            four++;
    }
    if (four > 1)
        return (1);
    four = 0;
    while (str2[i] != '\0')
    {
        if (str2[i] == '4')
            four++;
    }
    if (four > 1)
        return (1);
    return (0);
}

int val_four_col(char str3[5], char str4[5])
{
    int i;
    int four;

    i = 0;
    four = 0;
    while (str3[i] != '\0')
    {
        if (str3[i] == '4')
            four++;
    }
    if (four > 1)
        return (1);
    four = 0;
    while (str4[i] != '\0')
    {
        if (str4[i] == '4')
            four++;
    }
    if (four > 1)
        return (1);
    return (0);
}
/*
int val_four(char str1[5], char str2[5], char str3[5], char str4[5])
{
    if (val_four_row(str1[5], str2[5]) || val_four_col(str3[5], str4[5]))
        return (1);
    return (0);
}
*/





int main(int argc, char **argv)
{
    if (argc == 2)
    {
        if (val_input(argv[1])) 
        {
            write(1, "Wrong number", 12);
            return (0);
        }

    }
    else
        write(1, "Error, more than 1 argument", 27);
    return (0);
}