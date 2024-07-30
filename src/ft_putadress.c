/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:27:45 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/28 16:54:07 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long int nb, const char *base, int count)
{
	if (nb > ft_strlen(base) - 1)
		count = ft_puthex(nb / ft_strlen(base), base, count);
	count = ft_putchar(*(base + (nb % ft_strlen(base))), count);
	return (count);
}

int	ft_putadress(void *format, int count)
{
	unsigned long	nb;
	const char		*base = "0123456789abcdef";

	nb = (unsigned long)format;
	count = ft_putstr("0x", count);
	count = ft_puthex(nb, base, count);
	return (count);
}
