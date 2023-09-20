/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:47:19 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/13 16:34:03 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cont;
	unsigned int	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
	{
		return (len);
	}
	cont = 0;
	while (src[cont] != '\0' && cont < size - 1)
	{
		dest[cont] = src[cont];
		cont = cont + 1;
	}
	dest[cont] = '\0';
	return (len);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char src[] = "Holita";
	char dest[] = "Adiiytvb";
	char dest2[] = "Adiiytvb";
	printf("%d\n", ft_strlcpy(dest, src, 5));
	puts(dest);
	printf("%lu\n", strlcpy(dest2, src, 5));
	puts(dest2);
}
*/
