/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_various.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:44:39 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/07 14:20:31 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int ft_putstr(char *str)
{
	size_t i;

	i = 0;
	while (*str)
	{
		ft_putchar((int)str[i]);
		++i;
	}
	return (i);
}

int ft_putnbr_base(long n, int base)
{
	int count;
	char *hexa;

	hexa = "0123456789abcdef";
	if (n < 0)
	{
		ft_putchar('-');
		return (ft_putnbr_base(-n, base) + 1);
	}
	else if (n < base)
		return (print_char(hexa[n]));
	else 
	{
		count = ft_putchar(n / base);
		return (count + ft_putnbr(n % base, base));
	}
}