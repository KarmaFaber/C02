int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			str ++ ;
		else
			return (0);
	}
	return (1);
}
/*#include <stdio.h>
int main() {

    char *str=" ";

    int resultado = ft_str_is_printable(str);

    if (resultado == 0) 
    {
        printf("La función devolvió 0: otro tipo de combiaciones\n");
    } 
    else if (resultado == 1) 
    {
        printf("La función devolvió 1: caracteres imprimibles o string vacio\n");
    } 
    return 0;
}*/
