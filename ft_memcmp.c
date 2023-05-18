/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaorozco <jaorozco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 00:36:59 by jaorozco          #+#    #+#             */
/*   Updated: 2023/05/10 01:09:31 by jaorozco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}
/*
int main()
{
   char a[3] = { 82, 81, 84 };
   char b[3] = { 85, 83, 86 };
   int i;

   char a1[3] = { 82, 81, 84 };
   char b1[3] = { 85, 83, 86 };
   int	i1;

   printf("Original\n");
   for( i=0; i<3; i++ )
     printf( "a[%d]=%c ", i, a[i] );
   printf( "\n" );
   for( i=0; i<3; i++ )
     printf( "b[%d]=%c ", i, b[i] );
   printf( "\n" );

   i = memcmp( a, b, 4 );
   printf( "a es " );
   if( i < 0 )  printf( "menor que" );
   else if( i > 0 )  printf( "mayor que" );
   else  printf( "igual a" );
   printf( " b\n" );

   printf("Mi funcion:\n");
   for( i1=0; i1<3; i1++ )
     printf( "a[%d]=%c ", i1, a1[i1] );
   printf( "\n" );
   for( i1=0; i1<3; i1++ )
     printf( "b[%d]=%c ", i1, b1[i1] );
   printf( "\n" );

   i1 = ft_memcmp( a1, b1, 4 );
   printf( "a es " );
   if( i1 < 0 )  printf( "menor que" );
   else if( i1 > 0 )  printf( "mayor que" );
   else  printf( "igual a" );
   printf( " b\n" );
}*/
