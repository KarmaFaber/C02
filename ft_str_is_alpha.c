

int ft_str_is_alpha(char *str)
{
    // Verificar si el string es vacío
    if (*str == '\0')
        return 1;

    while (*str)
    {
        if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
        {
            str++;
        }
        else
        {
            return 0;
        }
    }

    return 1;
}
#include <stdio.h>
int main()
{
    char *str = "ldkns dfgf  onih";
    int resultado = ft_str_is_alpha(str);

    if (resultado == 0)
    {
        printf("La función devolvió 0: otros tipos de caracteres o caracteres con espacios\n");
    }
    else if (resultado == 1)
    {
        printf("La función devolvió 1: alfanuméricos o espacios en blanco\n");
    }

    return 0;
}
