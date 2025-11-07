/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:22:04 by mbotelho          #+#    #+#             */
/*   Updated: 2025/10/22 08:16:49 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_isalpha(c) && !(c >= 'A' && c <= 'Z'))
	{
		c = c - ('a' - 'A');
	}
	return (c);
}

/*int main(void)
{
	printf("%d", ft_toupper("Hello"));
}*/