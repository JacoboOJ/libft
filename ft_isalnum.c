/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:56:09 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/04 14:06:15 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int main(void)
{
	int num = 2;
	char let = 'h';

	printf("Int\n");
	printf("Mi funcion: %i\n", ft_isalnum(num));
	printf("Original: %i\n", isalnum(num));
	printf("Char\n");
	printf("Mi funcion: %i\n", ft_isalnum(let));
	printf("Original: %i\n", isalnum(let));
}*/
