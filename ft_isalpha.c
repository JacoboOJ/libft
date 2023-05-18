/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:55:18 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/04 14:07:03 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= '\101' && c <= '\132')
		|| (c >= '\141' && c <= '\172'));
}
/*
int main(void)
{
//	int num = 4;
	char let = '\n';

	printf("Mi funcion: %i\n",ft_isalpha(let));
	printf("Original: %i\n",isalpha(let));
}*/
