/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:29:54 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/07 08:26:20 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptrd;
	unsigned char		*ptrs;
	size_t				i;

	if (!dest || !src)
		return (NULL);
	ptrd = (unsigned char *) dest;
	ptrs = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		ptrd[i] = ptrs[i];
		i++;
	}
	return (dest);
}

/*int main(void)
{
	printf("========Testing memcpy========\n\n");
	char src[10] = "abcdefghi";
    char buffer1[10];
    int i;
	if (ft_memcpy(buffer1, src, 10) == ft_memcpy(buffer1, src, 10))
	{
		 printf("SUCCESS    Testing: dest, 'abcdefghi', 10\n");
        while (i < 10)
		{
			printf("%c ", buffer1[i]);
			i++;
		}
        printf("\n");
    }
    else
	{
        printf("Oh no :(    Testing: 10 bytes\n");
	}
	
	printf("\n");
	
	// Test 2: Copy 0 bytes
	i = 0;
	if (ft_memcpy(buffer1, src, 0) == ft_memcpy(buffer1, src, 0))
	{
		 printf("SUCCESS    Testing: dest, 'abcdefghi', 0\n");
    }
    else
	{
        printf("Oh no :(    Testing: 10 bytes\n");
	}
}*/