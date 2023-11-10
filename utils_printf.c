/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:06:58 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/10 16:39:20 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	write(1, s, i);
}

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n, int *i)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		*i = 12;
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		(*i)++;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, i);
		ft_putnbr(n % 10, i);
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
		(*i)++;
	}
}