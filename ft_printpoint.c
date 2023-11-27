/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:06:46 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/11/27 18:25:08 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_printpoint(unsigned long long int i , int base)
{
	int	numchar;
	char	*low;
	char	*up;

	numchar = 0;
	low = "0123456789abcdef";
	up = "0123456789ABCDEF";

	if (i >= 16)
	{
		numchar += ft_printpoint (i / 16, base);
		numchar += ft_printpoint (i % 16, base);
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
