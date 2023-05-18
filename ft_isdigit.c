/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:55:41 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/04 14:07:43 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '\060' && c <= '\071');
}
/*
int main(void)
{
	int num = 23;
	char let = '2';

	printf("Mi funcion: %i\n", ft_isdigit(num));
	printf("Original: %i\n", isdigit(num));
}*/
