/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:20:46 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/12/05 17:32:12 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

int	ft_formats(va_list arg, int i)
{
	if (i == 'c')
		return (ft_printchr(va_arg(arg, int)));
	if (i == 's')
		return (ft_printstr(va_arg(arg, char *)));
	if (i == 'd' || i == 'i')
		return (ft_printint(va_arg(arg, int)));
	if (i == 'u')
		return (ft_printusigint(va_arg(arg, unsigned int)));
	if (i == 'x')
		return (ft_printhex(va_arg(arg, unsigned int), 1));
	if (i == 'X')
		return (ft_printhex(va_arg(arg, unsigned int), 0));
	if (i == 'p')
		return (ft_printpoint(va_arg(arg, unsigned long long int)));
	if (i == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list			arg;
	unsigned int	i;
	int				total;

	total = 0;
	va_start(arg, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			total += ft_formats (arg, str[i]);
		}
		else
			total += write(1, &str[i], 1);
		i++;
	}
	va_end(arg);
	return (total);
}
