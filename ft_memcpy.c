/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <jaurbano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:07:03 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/20 13:06:55 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cont;

	if (!dst && !src)
		return (NULL);
	cont = 0;
	while (cont < n)
	{
		*(char *)(dst + cont) = *(char *)(src + cont);
		cont++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int main () 
{
	const char src[50] = "I've come to talk with you again";
   	char dest[50];
   	strcpy(dest,"Hello Darkness my old friend");
   	printf("Before memcpy dest = %s\n", dest);
   	memcpy(dest, src, 30);
   	printf("After memcpy dest = %s\n", dest);

   	char src2[50] = "I've come to talk with you again";
   	char dest2[50];
   	strcpy(dest2,"Hello Darkness my old friend");
   	printf("Before memcpy dest = %s\n", dest2);
   	ft_memcpy(dest2, src2, 30);
   	printf("After memcpy dest  = %s\n", dest2);

   return(0);
}
*/
