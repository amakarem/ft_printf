/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:21:57 by aelaaser          #+#    #+#             */
/*   Updated: 2024/10/19 04:59:51 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_case_int(char format, int n)
{
	if (format == 'i' || format == 'd')
		return (ft_putnbr(n));
	else if (format == 'c')
		return (ft_putchar(n));
	else if (format == 'X' || format == 'x')
		return (ft_nbrtohexadecimal(n, format));
	else if (format == 'u')
		return (ft_putunsignednbr((unsigned int)n));
	else if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

// alternative
// int ft_printf(char *format, int count, void *args[])
int	ft_printf(char *format, ...)
{
	int		i;
	va_list	ap;

	i = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format != '%')
			i += ft_putchar(*format);
		else
		{
			format++;
			if (*format && *format != 's' && *format != '%')
				i += ft_print_case_int(*format, va_arg(ap, int));
			else if (*format && *format == 's')
				i += ft_putstr(va_arg(ap, char *));
			else if (*format == '%')
				i += (ft_putchar('%'));
		}
		format++;
	}
	va_end(ap);
	return (i);
}
