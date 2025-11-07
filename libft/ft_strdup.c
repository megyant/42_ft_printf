/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:04:22 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/07 08:27:28 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	dest = malloc((s_len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = -1;
	while (++i < s_len)
		dest[i] = s[i];
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
	const char *s = "Hello, world";
	char *dest1 = ft_strdup(s);
	char *dest2 = strdup(s);

	printf("Mine:     %s\nOriginal: %s\n", dest1, dest2);
	free (dest1);
	free (dest2);
	return (0);
}*/