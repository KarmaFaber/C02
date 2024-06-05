int     ft_str_is_numeric(char *str)
 14 {
 15         while (*str)
 16         {
 17                 if ((*str >= '0' && *str <= '9') || (*str == ' '))
 18                         str ++ ;
 19                 else
 20                 {
 21                         return (0);
 22                 }
 23         }
 24         return (1);
 25 }
 26 /*#include <stdio.h>
 27 int main()
 28 {
 29 
 30     char *str="54554";
 31     int resultado = ft_str_is_numeric(str);
 32 
 33 
 34     if (resultado == 0) {
 35         printf("La función devolvió 0: otro tipo de caracteres\n");
 36     } else if (resultado == 1) {
 37         printf("La función devolvió 1: son digitos de 0 a 9 o espacios en blanco\n");
 38     } else {
 39         printf("Valor inesperado\n");
 40     }
 41     return 0;
 42 }*/
