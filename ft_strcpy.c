

char    *ft_strcpy(char *dest, char *src)
{
    int i;
    
    i=0;
    while (src[i] !='\0')
    {
        dest[i]=src[i];
        i ++ ;
    }
    dest[i]='\0';
    return (dest);
}

#include <stdio.h>
int main()

{
    //strcpy(destino, origen);
    char destino[5];
    char origen[5]="hola";
    ft_strcpy(destino, origen);
    printf("%s\n", destino);
    return 0;
}
