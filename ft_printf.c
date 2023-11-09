/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:31:00 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/09 16:28:26 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_in_set(int c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	check_percent_convert(int c)
{
	if (c == 'c')
		printf("char\n");
	if (c == 's')
		printf("string\n");
	if (c == 'p')
		printf("void\n");
	if (c == 'd')
		printf("d10\n");
	if (c == 'i')
		printf("i10\n");
	if (c == 'u')
		printf("ud10\n");
	if (c == 'x')
		printf("hxl16\n");
	if (c == 'X')
		printf("hxu16\n");
	if (c == '%')
		printf("percent\n");
}

void	check_format(char *s)
{
	int	i;
	int	percent;

	i = 0;
	percent = 0;
	while (s[i])
	{
		if (s[i] == '%' && is_in_set(s[i + 1], "cspdiuxX%"))
		{
			check_percent_convert(s[i + 1]);
			percent++;
		}
		i++;
	}
	if (percent == 0)
		ft_putstr(s);
	printf("%d\n", percent);
}

int	ft_printf(const char *format, ...)
{
}

void	main(void)
{
	// printf("%s\n", "test");
	check_format("tes%ct%%te%sst");
}