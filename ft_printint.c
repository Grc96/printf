/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:40:54 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/11/15 17:21:48 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_printint(int n)
{
	long int	nb;
	int			numchar;

	nb = n;
	numchar = 0;
	if (nb < 0)
	{
		numchar++;
		write (1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		numchar += ft_printint(nb / 10);
		numchar += ft_printint(nb % 10);
	}
	else
		numchar += ft_printchr(nb + '0');
	return (numchar);
}
