/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:20:25 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/08 16:33:12 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	char *s = "Hola como estas?";
	char c = 'o';

	printf("Mi funcion: %s\n", ft_strchr(s, c));
	printf("Original: %s\n", strchr(s, c));
	printf("strrchr: %s\n", strrchr(s, c));
}*/
