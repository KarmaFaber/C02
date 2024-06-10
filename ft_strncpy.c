char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i ++ ;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main ()
{
    char origen[8] = "hola U";
    char dest[8];
    unsigned int num = 3;

    ft_strncpy (dest, origen, num);
    
    printf ("char origen: %s\n", origen);
    printf ("char destino: %s\n", dest);
    printf ("n caracteres a imprimir: %u\n", num);
    
    return 0;
}*/
