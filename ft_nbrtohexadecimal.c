/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrtohexadecimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:13:29 by aelaaser          #+#    #+#             */
/*   Updated: 2024/10/18 22:36:44 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	ft_hexconv(int n, char format)
{
	if (n >= 0 && n <= 9)
		return (n + 48);
	else if (format == 'X' && n >= 10 && n <= 16)
		return (n + 55);
	else if (format == 'x' && n >= 10 && n <= 16)
		return (n + 87);
	return (0);
}

int	ft_nbrtohexadecimal(int n, char format)
{
	char	*hex;
	char	*tmphex;
	int		tmp;
	int		i;

	tmphex = malloc(sizeof(char) * 9);
	if (!tmphex)
		return (0);
	i = 0;
	while (n > 0)
	{
		tmp = n;
		n = (n / 16);
		tmphex[i++] = ft_hexconv(tmp - (16 * n), format);
	}
	tmphex[i] = '\0';
	hex = ft_revstr(tmphex);
	free(tmphex);
	i = ft_putstr(hex);
	free(hex);
	return (i);
}
