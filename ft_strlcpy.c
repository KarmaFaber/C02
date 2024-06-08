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
    unsigned int src_len;
    unsigned int i;
    
    src_len =ft_strlen(src);
    
    if (size != 0 )
    {
            i = 0;
            while (i < size -1 && src[i] != '\0')
            {
                dest[i] = src[i];
                i ++;
            }
            dest[i] = '\0';
    }
    return src_len;
}


#include <stdio.h>
int main (void)
{
    char origen [] ="hola caracola";
    char destino[20];
    unsigned int size = sizeof(destino)/ sizeof(destino[0]); /*calcula el tamaño del array destino dividiendo el tamaño total del array por el tamaño de un solo elemento del array. Esto nos da el número de elementos en el array destino*/
    
    ft_strlcpy(destino, origen, size);
    
   
    printf("string origen: %s\n", destino);
    printf("string destino: %s\n", origen);
    printf("size :%i\n", size);
    printf("tamaño de origen:%i\n", sizeof(origen));
    printf("tamaño de destino:%i\n", sizeof(destino));
    
    return 0;
}
