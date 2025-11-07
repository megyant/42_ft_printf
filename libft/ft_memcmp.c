/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:49:05 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/07 08:29:10 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;
	int					diff;

	ptr1 = (const unsigned char *) s1;
	ptr2 = (const unsigned char *) s2;
	i = 0;
	diff = 0;
	if (!s1 || !s2)
		return (0);
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			diff = ptr1[i] - ptr2[i];
			break ;
		}
		i++;
	}
	return (diff);
}

/*int main(void)
{
	char buffer1[] = {'a', 'b', 'c'};
	char buffer2[] = {'a', 'b', 'c'};
	
	printf("%d", ft_memcmp(buffer1, buffer2, 3));
	printf("\n");
	printf("%d", memcmp(buffer1, buffer2, 3));
	printf("\n");
}*/