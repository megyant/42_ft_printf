/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:24:19 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/06 15:25:44 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
	{
		return (NULL);
	}
	ptr = (unsigned char *)malloc(nmemb * size);
	i = -1;
	if (!ptr)
		return (NULL);
	while (++i < (nmemb * size))
	{
		ptr[i] = 0;
	}
	return ((void *)ptr);
}

/* int	main(void)
{
	size_t	nmemb = 20;
	size_t	size = sizeof(char);
	char	*space = (char *)ft_calloc(nmemb, size);

	strncpy(space, "Hello, World!", nmemb - 1);
	space[nmemb - 1] = '\0';
	printf("%s\n", space);
	free(space);
	return(0);
} */