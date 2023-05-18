/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:39:37 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/08 20:05:05 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		*str = '\0';
		i++;
		str++;
	}
}
/*
int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    char str1[50] = "GeeksForGeeks is for programming geeks.";
	printf("Original:\n");
    printf("Before bzero(): %s\n", str);
	bzero(str + 13, 8*sizeof(char));
    printf("After bzero():  %s\n", str);
	printf("Mi funcion:\n");
    printf("Before ft_bzero(): %s\n", str1);
	ft_bzero(str1 + 13, 8*sizeof(char));
    printf("After ft_bzero():  %s\n", str1);
}*/
