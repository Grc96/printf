/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:22:23 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/12/05 17:39:57 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	numchar;
	int	i;

	numchar = 0;
	i = 0;
	if (!str)
	{
		numchar += write (1, "(null)", 6);
		return (numchar);
	}
	while (str[i] != '\0')
	{
		numchar += write (1, &str[i++], 1);
	}
	return (numchar);
}
