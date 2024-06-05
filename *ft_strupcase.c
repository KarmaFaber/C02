char *ft_strupcase(char *str)
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


#include <stdio.h>

int main ()
{
    char original [] ="sr";
    
    char *modif= ft_strupcase(original);
    

    printf("string original: %s\n", original);
    printf("string modificado: %s\n", modif);

    return 0;
}


/*int main() {
    char original[] = "bSaSf";

    char *modified_upper = ft_strupcase(original);

    printf("String original: %s\n", original); // Original string remains unchanged
    printf("String modified: %s\n", modified_upper); // Use the modified copy

    return 0;
}*/
