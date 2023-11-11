/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:31:00 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/11 07:59:45 by kdaumont         ###   ########.fr       */
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

void	check_percent_convert(int c, va_list args)
{
	int	i;

	i = 0;
	if (c == 'c')
		ft_putchar(va_arg(args, int));
	if (c == 's')
		ft_putstr(va_arg(args, char *));
	if (c == 'p')
		ft_putstr("void");
	if (c == 'd')
		convert_base(va_arg(args, int), "0123456789", i);
	if (c == 'i')
		convert_base(va_arg(args, int), "0123456789", i);
	if (c == 'u')
		convert_base(va_arg(args, int), "0123456789", i);
	if (c == 'x')
		convert_base(va_arg(args, int), "0123456789abcdef", i);
	if (c == 'X')
		convert_base(va_arg(args, int), "0123456789ABCDEF", i);
	if (c == '%')
		ft_putstr("%");
}

void	check_format(char *s, va_list args)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '%' && is_in_set(s[i + 1], "cspdiuxX%"))
		{
			check_percent_convert(s[i + 1], args);
			i++;
		}
		else
			ft_putchar(s[i]);
		i++;
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	argList;
	int		*len;

	len = 0;
	va_start(argList, (char *)format);
	check_format((char *)format, argList);
	va_end(argList);
}
