/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:03:37 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/12/05 17:35:59 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

//PRINC
int		ft_printf(char const *str, ...);

//AUX

int		ft_printchr(int x);
int		ft_printint(int n);
int		ft_printstr(char *str);
int		ft_printusigint(unsigned int i);
int		ft_printhex(unsigned long long int i, int base);
char	*ft_strchr(const char *s, int c);
int		ft_printpoint(unsigned long long int i);
void	ft_putchar(char c);

#endif
