/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:51:40 by jaorozco          #+#    #+#             */
/*   Updated: 2023/06/12 13:55:27 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count ++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**new;
	size_t	i;
	size_t	len;

	new = malloc(sizeof(char *) * count_words(s, c) + 1);
	if (!s || !new)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			new[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	new[i] = 0;
	return (new);
}
/*
int	main()
{
	int	i = 0;
	char	**strs;

	strs = ft_split("Hola Como estas?", ' ');
	while(i < count_words("Hola Como estas?", ' '))
	{
		printf("%i - %s\n", i, strs[i]);
		i++;
	}
}*/
