/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 06:53:54 by aelaaser          #+#    #+#             */
/*   Updated: 2024/10/19 07:42:37 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(void *ptr)
{
	char			buffer[20];
	char			hexchar;
	unsigned long	address;
	int				i;
	int				j;
	int				leading_zero;

	address = (unsigned long)ptr;
	leading_zero = 1;
	i = 0;
	j = 15;
	buffer[i++] = '0';
	buffer[i++] = 'x';
	while (j >= 0)
	{
		hexchar = ft_hexconv((address >> (j * 4)) & 0xF, 'x');
		if (hexchar != '0' || (leading_zero == 1 && i >= 3))
		{
			buffer[i++] = hexchar;
			leading_zero = 0;
		}
		j--;
	}
	if (leading_zero == 1) {
        buffer[i++] = '0';
    }
	buffer[i] = '\0';
	return (ft_putstr(buffer));
}
