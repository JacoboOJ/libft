/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:59:53 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/19 19:28:24 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, *(s1 + i)))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/*
int	main(void)
{
	char *s1 = "Hola como estas?";
	char *set = "Holaestas?";

	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
	printf("%s\n", ft_strtrim("Hola", "Hla"));
	printf("%s\n", ft_strtrim(s1, set));
}*/
