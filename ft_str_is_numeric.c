int     ft_str_is_numeric(char *str)
{
    
        if (*str == '\0')
		    return (1);
        while (*str)
        {
                 if (*str >= '0' && *str <= '9')
                          str ++ ;
                 else
                  {
                         return (0);
                  }
          }
          return (1);
  }
  #include <stdio.h>
  int main()
  {
  
      char *str="31651";
      int resultado = ft_str_is_numeric(str);
  
  
      if (resultado == 0) {
         printf("La función devolvió 0: otro tipo de caracteres\n");
     } else if (resultado == 1) {
         printf("La función devolvió 1: son digitos de 0 a 9, SIN espacios en blanco, o string vacia\n");
      } else {
         printf("Valor inesperado\n");
      }
      return 0;
 }
