/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:14:31 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/04 18:42:58 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	char let = 'h';
	char let2 = 'L';
	char num = '5';

	printf("Minuscula\n");
	printf("Mi funccion: %c\n", ft_toupper(let));
	printf("Original: %c\n", toupper(let));
	printf("Mayuscula\n");
	printf("Mi funcion: %c\n", ft_toupper(let2));
	printf("Original: %c\n", toupper(let2));
	printf("Numero\n");
	printf("Mi funcion: %c\n", ft_toupper(num));
	printf("Original: %c\n", toupper(num));
}*/
