/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:20:46 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/11/29 17:44:41 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_formats(va_list arg, unsigned int numchar  , int i)
{
	if (i == 'c')
		numchar += ft_printchr(va_arg(arg, int));
	else if (i == 's')
		numchar += ft_printstr(va_arg(arg, char *));
	else if (i == 'd')
		numchar += ft_printint(va_arg(arg, int));
	else if (i == 'u')
		numchar += ft_printusigint(va_arg(arg, unsigned int));
	else if (i == 'x')
		numchar += ft_printhex(va_arg(arg, unsigned int), 1);
	else if (i == 'X')
		numchar += ft_printhex(va_arg(arg, unsigned int), 0);
	else if (i == 'p')
	{
		write(1, "0x", 2);
		numchar += ft_printpoint(va_arg(arg, unsigned long long int),1);
	}
	else if (i == '%')
		numchar += write(1, "%", 1);

	return (numchar);
}

int	ft_printf(char const *str, ...)
{
	va_list	arg;
	unsigned int	i; 
	int	total;

	va_start(arg, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			total = ft_formats(arg, total, str[i]);
		}
		else 
			total += write(1, &str[i], 1);
		i++;
	}
	va_end(arg);
	return (total);
}
