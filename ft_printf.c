/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:21:57 by aelaaser          #+#    #+#             */
/*   Updated: 2024/10/17 22:33:21 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	ft_printf(char *format, ...)
{
	int		i;
	int		n;
	va_list ap;

	i = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format != '%')
			i += ft_putchar(*format);
		else
		{
			format++;
			if (*format && *format == 'i')
				i += ft_putnbr(va_arg(ap, int));
			else if (*format && *format == 'c')
				i += ft_putchar((char)va_arg(ap, int));
			else if (*format && *format == 's')
			   i += ft_putstr(va_arg(ap, char*));
			else if (*format && *format == '%')
				i += ft_putchar(*format);
		}
		format++;
	}
	va_end(ap);
	return (i);
}