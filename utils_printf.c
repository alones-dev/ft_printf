/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:06:58 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/10 17:44:44 by kdaumont         ###   ########.fr       */
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

void	ft_putnbr(int n, int *i, int base, char *formatBase)
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
		ft_putnbr(n / base, i, base, formatBase);
		ft_putnbr(n % base, i, base, formatBase);
	}
	if (n < 10)
	{
		ft_putchar(formatBase[n % base]);
		(*i)++;
	}
}