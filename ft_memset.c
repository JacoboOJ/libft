/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:20:06 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/08 19:43:55 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
	{
		*str = (unsigned char)c;
		i++;
		str++;
	}
	return (b);
}
/*
int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    char str1[50] = "GeeksForGeeks is for programming geeks.";
	printf("Original:\n");
    printf("Before memset(): %s\n", str);
	memset(str + 13, '.', 8*sizeof(char));
    printf("After memset():  %s\n", str);
	printf("Mi funcion:\n");
    printf("Before ft_memset(): %s\n", str1);
	ft_memset(str1 + 13, '.', 8*sizeof(char));
    printf("After ft_memset():  %s\n", str1);
}*/
