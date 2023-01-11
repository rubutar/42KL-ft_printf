/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:38:44 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/12/21 16:38:44 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include "libft.h"

int ft_formats(va_list args, const char format)
{
    int print_length;

    print_length = 0;

    if (format == 'c')
        print_length += ft_printchar(va_arg(args, int));
    else if (format == 's')
        print_length += ft_printstr(va_arg(args, char *));
    else if (format == 'p')
        print_length += ft_print_ptr(va_arg(args, unsigned long long ));
    else if (format == 'd' || format == 'i')
        print_length += ft_printnbr(va_arg(args, int));
    else if (format == 'u')
        print_length += ft_print_unsigned(va_arg(args, unsigned int));
    else if (format == 'x' || format == 'X')
        print_length += ft_print_hex(va_arg(args, unsigned int), format);
    else if (format == '%')
        print_length += ft_printpercent();
    return (print_length);
}

int ft_printf(const char *str, ...)
{
    int i;
    va_list args;
    int print_length;

    i = 0;
    print_length = 0;
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            print_length += ft_formats(args, str[i + 1]);
            i++;
        }
        else
            print_length += ft_printchar(str[i]);
        i++;
    }
    va_end(args);
    return (print_length);
}