/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:57:57 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/10 13:07:25 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	j = i;
	while (src[i - j] && i + 1 < dstsize)
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < dstsize)
		dst[i] = '\0';
	while (src[i - j])
		i++;
	return (i);
}
/*
int main (void)
{
  char *src = "1234";
  char dest[40] = "56789";
  printf("%zu\n", ft_strlcat(dest, src, 30));
  printf("%s\n", dest);
  //strlcat(dest, src, 15);
  //printf("%s\n", dest);
}*/
