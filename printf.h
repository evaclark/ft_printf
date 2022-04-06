/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:37:06 by eclark            #+#    #+#             */
/*   Updated: 2022/04/06 13:52:57 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_putnbr(int n);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_puthexl(unsigned int n);
int		ft_puthexu(unsigned int n);
int		ft_puthexp(void *p);
int		ft_putunsigned(unsigned int n);
int		ft_printf(const char *format, ...);

#endif
