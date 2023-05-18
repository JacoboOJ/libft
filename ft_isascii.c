/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:56:42 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/04 14:07:25 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= '\000' && c <= '\177');
}
/*
int main(void)
{
	int num = 4;
	char let = '€';

	printf("Int\n");
	printf("Mi funcion: %i\n", ft_isascii(num));
	printf("Original: %i\n", isascii(num));
	printf("Char\n");
	printf("Mi funcion: %i\n", ft_isascii(let));
	printf("Original: %i\n", isascii(let));

}*/
