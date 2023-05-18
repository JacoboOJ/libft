/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 00:11:11 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/16 12:46:33 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i ++;
		}
	}
	return (dst);
}
/*
int main ()
{
   const char src[50] = "http://www.w3cschool.cc";
   char dest[50];
   const char src1[50] = "http://www.w3cschool.cc";
   char dest1[50];

   printf("Original: \n");
   printf("Before memmove dest = %s\n", dest);
   memmove(dest, src, strlen(src)+1);
   printf("After memmove dest = %s\n", dest);
   printf("Mi funcion: \n");
   printf("Before ft_memmove dest = %s\n", dest1);
   ft_memmove(dest1, src1, strlen(src)+1);
   printf("After ft_memmove dest = %s\n", dest1);
}*/
