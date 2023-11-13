/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:06:58 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/13 16:42:07 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i])
		i++;
	write(1, s, i);
	return (i);
}

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	convert_base(unsigned int n, char *base, int i)
{
	int	len;

	len = ft_strlen(base);
	if (n >= len)
	{
		i = convert_base(n / len, base, i + 1);
		convert_base(n % len, base, i);
	}
	if (n < len)
	{
		ft_putchar(base[n]);
		i++;
	}
	return (i);
}

int	convert_ptr(unsigned long n, char *base, int i)
{
	int	len;

	if (!n)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	len = ft_strlen(base);
	// write(1, "0x", 2);
	if (n >= len)
	{
		i = convert_ptr(n / len, base, i + 1);
		convert_base(n % len, base, i);
	}
	if (n < len)
	{
		ft_putchar(base[n]);
		i++;
	}
	return (i + 2);
}
