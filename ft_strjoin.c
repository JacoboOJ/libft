/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:37:08 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/18 18:54:51 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len;
	char	*new;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, len + 1);
	ft_strlcat(new, s2, len + 1);
	return (new);
}
/*
int	main(void)
{
	char	*s1 = "Hola";
	char	*s2 = " como que";
	char	*s3 = "tal";
	char	*s4;
	char	*s5;

	s4 = ft_strjoin(s1, s2);
	printf("%s\n", s4);
	s5 = ft_strjoin(s4, s3);
	printf("%s\n", s5);
}*/
