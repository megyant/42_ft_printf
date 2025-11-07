/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:35:17 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/07 08:30:47 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	diff = 0;
	if (!s1 || !s2)
		return (0);
	while (((unsigned char)s1[i] || (unsigned char)s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			diff = (unsigned char)s1[i] - (unsigned char)s2[i];
			break ;
		}
		i++;
	}
	return (diff);
}

/*int main(void)
{
	const char *s1 = "Hello world";
	const char *s2 = "Hello ";
	printf("%d    %d", ft_strncmp(s1, s2, 10), strncmp(s1, s2, 10));
	return 0;
}*/