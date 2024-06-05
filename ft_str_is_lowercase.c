int ft_str_is_lowercase(char *str) 
{
    if (*str == '\0')
		return (1);

    while (*str)
    {
        if (*str >= 'a' && *str <= 'z') 
            str ++ ;
        else 
        {
            return (0);
        }  
    }
    return 1;
}

#include <stdio.h>
int main() {

    char *str="askjk  fbasjfb";

    int resultado = ft_str_is_lowercase(str);

    if (resultado == 0) 
    {
        printf("La función devolvió 0: otro tipo de combiaciones\n");
    } 
    else if (resultado == 1) 
    {
        printf("La función devolvió 1: alfabericos minusculas o string vacio\n");
    } 
    return 0;
}
