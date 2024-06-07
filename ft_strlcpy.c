int	ft_strlen(char *str)

{
    int i;
    i= 0;
    while (str[i] != '\0')
    {
        i ++ ;
    }
    return i;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)

{
    
    unsigned int src_len =ft_strlen(src);
    unsigned int i;

    if (size !=0 )
    
    {
            i=0;
            while (i < size -1 && src[i] != '\0')
            
            {
                dest[i] =src[i];
                i ++;
            }
            dest[i]= '\0';
    }
    
    return src_len;
}


#include <stdio.h>
int main (void)
{
    char origen [] ="hola";
    char destino[10];
    unsigned int size = sizeof(destino)/ sizeof(destino[0]);
    
    ft_strlcpy(destino, origen, size);
    printf("%s\n", destino);
    
    return 0;
}
