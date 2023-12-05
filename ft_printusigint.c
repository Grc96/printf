/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printusigint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:51:15 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/12/05 17:40:52 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	ft_printusigint(unsigned int i)
{
	int				numchar;
	unsigned int	num;

	num = i;
	numchar = 0;
	if (num > 9)
	{
		numchar += ft_printusigint(num / 10);
		numchar += ft_printusigint(num % 10);
	}
	else
		numchar += ft_printchr(num + '0');
	return (numchar);
}
