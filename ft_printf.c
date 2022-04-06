/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:02:10 by eclark            #+#    #+#             */
/*   Updated: 2022/04/06 14:26:30 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	check(const char character, va_list *args)
{
	if (character == 'c')
		return (ft_putchar(va_arg(*args, int)));
	if (character == 's')
		return (ft_putstr(va_arg(*args, char *)));
	if (character == 'd')
		return (ft_putnbr(va_arg(*args, int)));
	if (character == 'p')
		return (ft_puthexp(va_arg(*args, void *)));
	if (character == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	if (character == 'u')
		return (ft_putunsigned(va_arg(*args, unsigned int)));
	if (character == 'x')
		return (ft_puthexl(va_arg(*args, unsigned int)));
	if (character == 'X')
		return (ft_puthexu(va_arg(*args, unsigned int)));
	else if (character == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		length;

	va_start(args, format);
	i = 0;
	length = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			length = length + check(format[i], &args);
			i++;
		}
		else
		{
			length = length + ft_putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (length);
}
