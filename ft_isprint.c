/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:57:09 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/04 14:07:57 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return ((c >= '\040' && c <= '\047') || (c >= '\050' && c <= '\057')
		|| (c >= '\060' && c <= '\067') || (c >= '\070' && c <= '\077')
		|| (c >= '\100' && c <= '\117') || (c >= '\120' && c <= '\127')
		|| (c >= '\130' && c <= '\137') || (c >= '\140' && c <= '\147')
		|| (c >= '\150' && c <= '\157') || (c >= '\160' && c <= '\167')
		|| (c >= '\170' && c <= '\176'));
}
/*
int main(void)
{
	int num = 2;
	char let = ' ';

	printf("Int\n");
	printf("Mi funcion: %i\n", ft_isprint(num));
	printf("Original: %i\n", isprint(num));
	printf("Char\n");
	printf("Mi funcion: %i\n", ft_isprint(let));
	printf("Original: %i\n", isprint(let));
}*/
