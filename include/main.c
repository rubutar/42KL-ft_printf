#include <stdio.h>
#include "../src/ft_printf.c"


int main()
{
    int ch = 'k';
    int *ptr = &ch;
    char st[] = "AKA\n";
    char stnull[] = "";


    ft_printf("%c", ch);
    ft_printf("%c", '\n');
    ft_printf("%s", st);
    ft_printf("null : %s\n", stnull);
    // ft_printf("decimal : %d\n", ptr);
    ft_printf("integer : %i\n", ch+1);
    ft_printf("pointer : %p\n", ptr);
    // ft_printf("hex : %x\n", ptr);
    // ft_printf("unsigned : %u\n", ptr);



    printf("%c", ch);
    printf("%c", '\n');
    printf("%s", st);
    printf("null : %s\n", stnull);
    // printf("decimal : %d\n", ptr);
    printf("integer : %i\n", ch+1);
    printf("pointer address : %p\n", ptr);
    // printf("hex : %x\n", ptr);
    // printf("unsigned : %u\n", ptr);

}