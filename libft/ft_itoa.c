/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 08:40:31 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/04 12:11:35 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_int(long n);
static char	*assigning_n(int count, long n, char *str);

char	*ft_itoa(int n)
{
	char	*number;
	int		count;
	long	nbr;

	nbr = n;
	count = count_int(nbr);
	number = malloc((count + 1) * sizeof(char));
	if (!number)
		return (NULL);
	number[count--] = '\0';
	return (assigning_n(count, nbr, number));
}

static int	count_int(long n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		n *= -1;
		count++;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*assigning_n(int count, long n, char *str)
{
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[count--] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

/*int main(void)
{
	printf("%s\n", ft_itoa(-1234));
	printf("%s\n", ft_itoa(1234));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(INT_MIN));
}*/
