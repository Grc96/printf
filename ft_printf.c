/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:20:46 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/11/16 18:57:47 by gdel-cas         ###   ########.fr       */
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
		numchar += ft_printhex(va_arg(arg,unsigned int), 0);
}

int	ft_printf(char const *str, ...)
{
	va_list	arg;
	char	*a;
	unsigned int	i; 
	
	va_start(arg, str);
	i = 0;
	a = "cspdiuxX%";
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		i++;
	}
	va_end(arg);

	
	return (0);
}

