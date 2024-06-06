char *ft_strlowcase(char *str)
{
    int i;
    
    i = 0;
    while (str [i] != '\0')
    {
        if (str [i] >='A' && str [i] <='Z')
        {
            str[i] =str[i] + 32; 
        }
        i ++ ;
    }
    return str;
}


#include <stdio.h>
#include <unistd.h>
int main ()
{
    char original[] = "dsfkKFDlsdkfn";
    char copia[sizeof(original)];

    // Hacer una copia del string original
    int i = 0;
    while (original[i] != '\0')
    {
        copia[i] = original[i];
        i++;
    }
    copia[i] = '\0'; // Asegurar que la copia termina en '\0'

    // Modificar la copia
    char *modif = ft_strlowcase(copia);

    // Imprimir el string original usando write
    write(1, "string original: ", 17);
    write(1, original, sizeof(original) - 1);
    write(1, "\n", 1);

    // Imprimir el string modificado usando write
    write(1, "string modificado: ", 19);
    write(1, modif, sizeof(copia) - 1);
    write(1, "\n", 1);

    return 0;
}
