#include "include/ft_printf.h"
#include "include/libft.h"
#include <stdio.h>

int main () {

    char *string = "helloworld";
    int num = 1455;
    int negnum = -1455;


    ft_printf("using ft_printf %%c : u --> %c <--\n", 'u');
    printf("using printf %%c : u --> %c <--\n\n", 'u');

    ft_printf("using ft_printf %%s : helloworld --> %s <--\n", string);
    printf("using printf %%s : helloworld --> %s <--\n\n", string);

    ft_printf("using ft_printf %%p  --> %p <--\n", string);
    printf("using printf %%p --> %p <--\n\n", string);

    ft_printf("using ft_printf %%d : 1455 --> %d <--\n", num);
    printf("using printf %%d : 1455 --> %d <--\n\n", num);

    ft_printf("using ft_printf %%d : -1455 --> %d <--\n", negnum);
    printf("using printf %%d : -1455 --> %d <--\n\n", negnum);

    ft_printf("using ft_printf %%u : 1455 --> %u <--\n", num);
    printf("using printf %%u : 1455 --> %u <--\n\n", num);

    ft_printf("using ft_printf %%u : -1455 --> %u <--\n", negnum);
    printf("using printf %%u : -1455 --> %u <--\n\n", negnum);

    ft_printf("using ft_printf %%x  --> %x <--\n", num);
    printf("using printf %%x --> %x <--\n\n", num);

    ft_printf("using ft_printf %%X  --> %X <--\n", num);
    printf("using printf %%X --> %X <--\n\n", num);


}