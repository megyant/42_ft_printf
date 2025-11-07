/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:30:05 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/07 09:05:33 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	if (!s)
	{
		return (NULL);
	}
	while (n > 0)
	{
		ptr[n - 1] = (unsigned char)c;
		n--;
	}
	return (s);
}

/*int	main(void)
{
	printf("========Testing memset========\n\n");
	char buffer[10];
	int i = 0;
	// Test 1: Fill with 'a'
	if (ft_memset(buffer, 'a', 10) == memset(buffer, 'a', 10))
	{
		printf("SUCESS    Testing: 10, 'a', 10\n");
		while (i < 10)
		{
			printf("%d ", buffer[i]);
			i++;
		}
		printf("\n");
	}
	else
		printf("Oh no :(    Testing: 10, 'a', 10\n");

	printf("\n");

	// Test 2: Fill with '\\0'
	i = 0;
	if (ft_memset(buffer, '\0', 10) == memset(buffer, '\0', 10))
	{
		printf("SUCCESS    Testing: '\\0', 10\n");
		while (i < 10)
			printf("%d ", buffer[i++]);
		printf("\n");
	}
	else
		printf("Oh no :(    Testing: '\\0', 10\n");

	printf("\n");

	// Test 3: Fill with 255
	i = 0;
	if (ft_memset(buffer, 255, 10) == memset(buffer, 255, 10))
	{
		printf("SUCCESS    Testing: 255, 10\n");
		while (i < 10)
			printf("%d ", buffer[i++]);
		printf("\n");
	}
	else
		printf("Oh no :(    Testing: 255, 10\n");

	printf("\n");

	// Test 4: Fill with 127 - Ascii limit
	i = 0;
	if (ft_memset(buffer, 127, 10) == memset(buffer, 127, 10))
	{
		printf("SUCCESS    Testing: 127, 10\n");
		while (i < 10)
			printf("%d ", buffer[i++]);
		printf("\n");
	}
	else
		printf("Oh no :(    Testing: 127, 10\n");
}*/