/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:55:40 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/05 14:02:34 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && (s1[i] || s2[i]))
	{
		i++;
	}
	return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
/*
int	main(void)
{
	char			*s1 = "aazb";
	char			*s2 = "aaac";
	unsigned int	n = 3;

	printf("Mi funcion: %d\n", ft_strncmp(s1, s2, n));
	printf("Original: %d\n", strncmp(s1, s2, n));
}*/
