/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 08:48:00 by mbotelho          #+#    #+#             */
/*   Updated: 2025/11/07 09:05:47 by mbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c);
static char	*allocate_word(const char *s, char c);
static void	*freeing(char **strf, int size);

char	**ft_split(char const *s, char c)
{
	char	**strf;
	size_t	i;

	if (!s)
		return (ft_calloc(1, sizeof(char *)));
	strf = ft_calloc(word_count(s, c) + 1, sizeof(char *));
	if (!strf)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		strf[i] = allocate_word(s, c);
		if (!strf[i])
			return (freeing(strf, (i - 1)));
		i++;
		while (*s && *s != c)
			s++;
	}
	strf[i] = NULL;
	return (strf);
}

static int	word_count(char const *s, char c)
{
	size_t	trigger;
	size_t	count;

	trigger = 0;
	count = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (*s == c)
		{
			trigger = 0;
		}
		s++;
	}
	return (count);
}

static char	*allocate_word(const char *s, char c)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (s[len] && !(s[len] == c))
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void	*freeing(char **strf, int size)
{
	while (size >= 0)
		free(strf[size--]);
	free(strf);
	return (NULL);
}

/*int main(void)
{
	size_t i = 0;
	char **strf = ft_split(NULL, 'c');
	if (strf == NULL)
	{
		printf("ft_split returned NULL (as expected)\n");
		return (0);
	}
	while(strf[i])
	{
		printf("%s\n", strf[i]);
		i++;
	}
	free (strf);
	return (0);
}*/
