/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 00:16:32 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/11 18:21:10 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	character;

	i = 0;
	str = (unsigned char *)s;
	character = (unsigned char)c;
	while (i < n)
	{
		if (*str == character)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char cadena[] = "arase una vez...";
	char *puntero;
	char cadena1[] = "arase una vez...";
	char *puntero1;
	
	puntero = (char *)memchr( cadena, 'a', 5 );
	printf("Original \n");
	printf("%s\n", cadena);
	printf("%s\n", puntero );
	puntero1 = (char *)ft_memchr( cadena1, 'a', 5 );
	printf("Mi funcion \n");
	printf("%s\n", cadena1);
	printf("%s\n", puntero1 );
}*/
