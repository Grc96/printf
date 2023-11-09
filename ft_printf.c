/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:20:46 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/11/09 18:19:22 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>




int	ft_printf(char const *str, ...)
{
	va_list	arg;
	char	*a;
	unsigned int	i; 
	
	va_start(arg, str);
	i = 0;
	while (str[i] != '\0')
	{
		a = va_arg(arg, char *);
		write(1, a, 6);
		if (str[i] == '%')
		i++;
	}
	va_end(arg);

	
	return (0);
}

