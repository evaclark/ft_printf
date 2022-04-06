/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:49:51 by eclark            #+#    #+#             */
/*   Updated: 2022/04/06 13:52:16 by eclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		i = 11;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_putnbr(nb);
		i++;
	}
	else if (nb > 9)
	{
		i = i + ft_putnbr(nb / 10);
		i = i + ft_putnbr(nb % 10);
	}
	else
		i = i + ft_putchar(nb + 48);
	return (i);
}
