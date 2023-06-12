/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:05:30 by jaorozco          #+#    #+#             */
/*   Updated: 2023/06/12 13:58:07 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned int	x;

	x = 0;
	while (s[x] != '\0')
		x += 1;
	return (x);
}
/*
int	main(void)
{
	char *s = "Hola     ";

	printf("Mi funcion: %lu\n", ft_strlen(s));
	printf("Original: %lu\n", strlen(s));
}*/
