/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:02:46 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/28 14:59:39 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr(long int nb, int count)
{
	if (nb < 0)
	{
		count = ft_putchar('-', count);
		nb *= -1;
	}
	if (nb > 9)
	{
		count = ft_putnbr(nb / 10, count);
		count = ft_putnbr(nb % 10, count);
	}
	else
		count = ft_putchar(nb + 48, count);
	return (count);
}

int	ft_putunsigned(unsigned int nb, int count)
{
	if (nb > 9)
	{
		count = ft_putnbr(nb / 10, count);
		count = ft_putnbr(nb % 10, count);
	}
	else
		count = ft_putchar(nb + 48, count);
	return (count);
}
