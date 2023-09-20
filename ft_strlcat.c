/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:59:52 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/13 13:50:26 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	cont1;
	size_t	cont2;
	size_t	lend;
	size_t	lens;

	cont1 = ft_strlen(dest);
	cont2 = 0;
	lend = ft_strlen(dest);
	lens = ft_strlen(src);
	if (size == 0)
		return (lens + size);
	while (src[cont2] && cont1 < size - 1)
	{
		dest[cont1] = src[cont2];
		cont1++;
		cont2++;
	}
	dest[cont1] = '\0';
	if (size < lend)
		return (lens + size);
	else
		return (lend + lens);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char	s1[] = "Marvin Mundo";
	char	s2[50] = "Hola Mundo";
	char	s3[50] = "Hola Mundo";

	printf("creada  %zu\n", ft_strlcat(s2,s1, 20));
	puts(s2);
	printf("predet %lu\n",  strlcat(s3, s1, 20));
	puts(s3);
	return(0);
}
*/
