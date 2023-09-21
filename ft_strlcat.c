/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <jaurbano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:18:07 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/21 12:39:35 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cont1;
	size_t	cont2;

	cont1 = 0;
	cont2 = 0;
	if (dstsize > 0)
	{
		while (cont1 < dstsize && dst[cont1])
			cont1++;
		while (src[cont2] && cont1 + cont2 < dstsize - 1)
		{
			dst[cont1 + cont2] = src[cont2];
			cont2++;
		}
	}
	if (cont1 + cont2 < dstsize)
		dst[cont1 + cont2] = '\0';
	while (src[cont2])
		cont2++;
	return (cont1 + cont2);
}
