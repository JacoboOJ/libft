/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:07:08 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/04 15:10:28 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
int	main(void)
{
	char let = 'h';
	char let2 = 'L';
	char num = '5';

	printf("Minuscula\n");
	printf("Mi funccion: %c\n", ft_tolower(let));
	printf("Original: %c\n", tolower(let));
	printf("Mayuscula\n");
	printf("Mi funcion: %c\n", ft_tolower(let2));
	printf("Original: %c\n", tolower(let2));
	printf("Numero\n");
	printf("Mi funcion: %c\n", ft_tolower(num));
	printf("Original: %c\n", tolower(num));
}*/
