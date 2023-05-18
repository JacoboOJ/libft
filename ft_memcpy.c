/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:05:17 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/11 15:07:12 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
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
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   printf("Mi funcion: \n");
   printf("Before ft_memcpy dest = %s\n", dest1);
   ft_memcpy(dest1, src1, strlen(src)+1);
   printf("After ft_memcpy dest = %s\n", dest1);
}*/
