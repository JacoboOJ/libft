/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:44:23 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/15 15:26:46 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*new;

	len = ft_strlen(s1);
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, len + 1);
	return (new);
}
/*
int	main(void)
{
	char *dst;
	char *dst2;

	dst = strdup("lorem ipsum dolor sit amet");
	printf("dst >> %s \n", dst);
	dst2 = ft_strdup(dst);
	printf("dst2 >> %s \n", dst2);
	printf("================\n");
}*/
