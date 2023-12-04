/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:55:46 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/11/29 17:15:21 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

/*MAIN FUNCTION*/
int	ft_printf(char const *str, ...);

/*INC*/
int	ft_printchr(int x);
int	ft_printint(int n);
int	ft_printstr(char *str);
int	ft_printusigint(unsigned int i);
int	ft_printhex(unsigned int i, int base);
char 	*ft_strchr(const char *s, int c);
int	ft_printpoint(unsigned long long int i, int base);
void	ft_putchar(char c);

#endif
