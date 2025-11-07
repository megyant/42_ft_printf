/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 08:41:30 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/03 12:13:01 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			s_len;
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	str = malloc((s_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < s_len)
		str[i] = f(i, s[i]);
	str[i] = '\0';
	return (str);
}

/*char alternate_case(unsigned int i, char c)
{
	if (c >= 'A' && c <= 'Z')
        c += 32;
 	if (i % 2 != 0 && c >= 'a' && c <= 'z')
        c -= 32;
    return c;
}*/

/*int main(void)
{
	char *str = ft_strmapi("Hello, world", alternate_case);
	printf("%s\n", str);
	free(str);
	return (0);
}*/