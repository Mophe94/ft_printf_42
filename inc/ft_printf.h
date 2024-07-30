/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:52:15 by dbajeux           #+#    #+#             */
/*   Updated: 2024/05/28 16:46:01 by dbajeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* ************************************************************************** */
/*                                 INCLUDE                                    */
/* ************************************************************************** */

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

/* ************************************************************************** */
/*                                 FUNCTION                                   */
/* ************************************************************************** */

int		ft_printf(const char *str, ...);
int		ft_putstr(char *str, int count);
size_t	ft_putnbr(long int nb, int count);
int		ft_putchar(char c, int count);
int		ft_putadress(void *format, int count);
int		ft_putunsigned(unsigned int nb, int count);
size_t	ft_strlen(const char *str);
int		ft_puthex(unsigned long int nb, const char *base, int count);
int		ft_strchr(const char *s, int c);
#endif
