/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:56:06 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/12/05 17:37:10 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_printhex(unsigned long long int i, int base )
{
	char	*low;
	char	*up;
	int		numchar;

	low = "0123456789abcdef";
	up = "0123456789ABCDEF";
	numchar = 0;
	if (i >= 16)
	{
		numchar += ft_printhex(i / 16, base);
		numchar += ft_printhex(i % 16, base);
	}
	else
	{
		if (base == 1)
			numchar += ft_printchr(low[i]);
		else
			numchar += ft_printchr(up[i]);
	}
	return (numchar);
}
