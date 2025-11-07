/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 08:48:09 by mbotelho          #+#    #+#             */
/*   Updated: 2025/10/31 14:48:11 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strf;
	size_t	i;
	size_t	j;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	strf = ft_calloc((s1_len + s2_len + 1), sizeof(char));
	if (!strf)
		return (NULL);
	i = -1;
	while (s1[++i])
		strf[i] = s1[i];
	j = -1;
	while (s2[++j])
	{
		strf[i] = s2[j];
		i++;
	}
	strf[i] = '\0';
	return (strf);
}

/*int main(void)
{
	printf("%s\n", ft_strjoin("Hello,", " world!"));
	return(0);
}*/
