/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:24:52 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/07 08:28:00 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	total_len;
	size_t	i;

	if (!src || !dst)
		return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	total_len = src_len + dst_len;
	i = 0;
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] && i < (size - (dst_len + 1)))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (total_len);
}

/*int main(void)
{ // ft_strlcpy and ft_strlcat
	const char *src = "Hello world!";
	char dst[4] = "amor";
	printf("len copied: %zu | dst: %s", ft_strlcat(dst, src, 4), dst);
	return 0;
}*/