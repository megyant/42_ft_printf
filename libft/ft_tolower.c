/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:28:23 by mbotelho          #+#    #+#             */
/*   Updated: 2025/10/22 08:16:35 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isalpha(c) && !(c >= 'a' && c <= 'z'))
	{
		c = c + ('a' - 'A');
	}
	return (c);
}

/*int main(void)
{
	printf("%d", ft_tolower("Hello"));
}*/