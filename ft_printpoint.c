/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:06:46 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/12/05 17:37:47 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_printpoint(unsigned long long int i)
{
	int	numchar;

	numchar = 0;
	numchar += write(1, "0x", 2);
	numchar += ft_printhex(i, 1);
	return (numchar);
}
