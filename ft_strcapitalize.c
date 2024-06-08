#include <unistd.h>

char *ft_strupcase(char *str) // pasar a mayusculas
{
    int i;
    
    i = 0;
    while (str [i] != '\0')
    {
        if (str [i] >='a' && str [i] <='z')
        {
            str[i] =str[i] - 32; 
        }
        i ++ ;
    }
    return str;
} 

char *ft_strdowncase(char *str) // pasar a minusculas
{
    int i;
    
    i = 0;
    while (str [i] != '\0')
    {
        if (str [i] >='a' && str [i] <='z')
        {
            str[i] =str[i] + 32; 
        }
        i ++ ;
    }
    return str;
}

int ft_str_is_alpha_n(char *str)// comprobacion de si el sring es alfanumerico
{
	while (*str)
	{
		if ((*str >= '0' && *str <= '9') || (*str >= 'a' && *str <= 'z'))
		{
			str ++ ;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}


char *ft_strcapitalize(char *str)

{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
    if (ft_str_is_alpha_n == 1)
        ft_strupcase(str[i]);
        
    
    i ++ ;
    }
    
}


int main (void)

{
    ft_strcapitalize("salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un. coSas de unicornios*locos (o a lo mejor not ). #in. El proyecto avanzó mucHo el último año. El equipo del Dr. Martínez & Dra. López +descubrió una ~pr$ote,ína que po@dría reVOLUCIOnar tratamientos contra el ¬cáncer. Colab€oraron con \?universidades: Tokio, Harvard, etc. El estudio tuvo >1,200 participantes (pacientes & voluntarios). Resultados se publicaron en \"Nature Medicine\" y fueron debatidos en conferencias globales.");
    
 
}
