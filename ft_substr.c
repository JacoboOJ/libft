/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:51:14 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/16 13:42:25 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*new;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
	{
		new = ft_strdup("");
		return (new);
	}
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s + start, len +1);
	return (new);
}
/*
int	main()
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*sub2;

	sub2 = ft_substr(str, 3, 20);
	printf("my_ft >> %s \n", sub2);
	printf("================\n");
}*/
