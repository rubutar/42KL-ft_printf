#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_memcmp.c"
#include "ft_memcpy.c"
#include "ft_memset.c"
#include "ft_memchar.c"
#include "ft_bzero.c"
#include "ft_memmove.c"
#include "ft_strdup.c"
#include "ft_strchr.c"

int main(int argc, char *argv[])
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {0, 6};
    char str[] = "start stop";
    char src[] = "ava";

    ft_memmove(arr1, arr2, 3 * sizeof(int));
    printf("adalah %d %d %d \n", arr1[0], arr1[1], arr1[2]);

    if(memchr(arr1, 3, sizeof(int) * 2) != NULL)
    {
        printf("ada\n");
    }
    else
    {
        printf("ga ada\n");
    }

    if (ft_memcmp(arr1, arr2, 2 * sizeof(int)) == 0)
    {
        printf("Arrays are the same\n");
    }
    else
    {
        printf("Arrays are not the same\n");
    }

    ft_memcpy(arr1, arr2, sizeof(int));
    printf("%d %d %d\n\n", arr1[0], arr1[1], arr1[2]);

    //ft_memset(arr1, 1, 3 * sizeof(int));
    //printf("%d %d %d\n", arr1[0], arr1[1], arr1[2]);


    ft_bzero(arr1, 1 * sizeof(int));
    printf("after bzero : %d %d %d\n\n", arr1[0], arr1[1], arr1[2]);

    ft_strdup(str);
    printf("strdup : %s\n\n", str);

    strchr(str, 48);
    printf("strchr : %s  --> ", str);
    if (ft_strchr(str, 'c') == 0)
    {
        printf("ga ada\n");
    }
    else
    {
        printf("ada\n");
    }
    
    return 0;
}
