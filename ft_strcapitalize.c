#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i ++ ;
	}
	return (str);
}

char	*ft_strdowncase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' || str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i ++ ;
	}
	return (str);
}

int	ft_is_al(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_is_num(char c)
{
	return ((c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (ft_is_al(str[i]) || ft_is_num(str[i]))
		{
			if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!new_word && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			new_word = 0;
		}
		else
		{
			new_word = 1;
		}
		i ++ ;
	}
	return (str);
}
#include <stdio.h>
int main(void) {
     char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un. coSas de unicornios*locos (o a lo mejor not ). #in. El proyecto avanzó mucHo el último anio. El equipo del Dr. Martinez & Dra. López +descubrió una ~pr$ote,ina que po@dría reVOLUCIOnar tratamientos contra el ¬cáncer. Colab€oraron con \\?universidades: Tokio, Harvard, etc. El estudio tuvo >1,200 participantes (pacientes & voluntarios). Resultados se publicaron en \"Nature Medicine\" y fueron debatidos en conferencias globales.";

    ft_strcapitalize(str);

    printf("%s\n", str);
    return 0;
}
