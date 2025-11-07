/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:30:00 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/07 08:26:25 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptrd;
	const unsigned char	*ptrs;
	size_t				i;

	if (!dest || !src)
		return (NULL);
	ptrd = (unsigned char *) dest;
	ptrs = (const unsigned char *) src;
	i = -1;
	if (ptrd > ptrs)
	{
		while (n > 0)
		{
			ptrd[n - 1] = ptrs[n - 1];
			n--;
		}
	}
	else
	{
		while (++i < n)
		{
			ptrd[i] = ptrs[i];
		}
	}
	return (dest);
}

/*int main(void)
{ 
	printf("========Testing memmove========\n\n");
	char str[] = "Hello";
	size_t n = 10;
	char dest[8] = "World";

	printf("src: %s \n", str);
	printf("dest: %s\n",dest);
	ft_memmove(dest + 4, str, n);
	printf("final dest: %s", dest);
}*/