int ft_str_is_alpha(char *str)
{
    while (*str)
    {
        if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z') || (*str == ' ')) /*A-Z y a-z y ' '*/
            {
                str ++ ; /*contador +1 cada vez que compruebe el string*/
            }
        else 
        {
            return (0);
        }
    }
    return (1); /*al terminar de comprobar el string devolvera el 1, sino se quedara en return 0;*/
}

#include <stdio.h>
int main() {

    char *str="";
    int resultado = ft_str_is_alpha(str);


    if (resultado == 0) {
        printf("La función devolvió 0: otro tipo de caracteres\n");
    } else if (resultado == 1) {
        printf("La función devolvió 1: alfanumericos o/y espacios en blanco\n");
    } else {
        printf("Valor inesperado\n");
    }
    return 0;
}
