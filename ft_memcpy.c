/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <jaurbano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:29:12 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/20 23:40:04 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cont;

	cont = 0;
	if (!src && !dst)
		return (NULL);
	while (cont < n)
	{
		*(unsigned char *)(dst + cont) = *(unsigned char *)(src + cont);
		cont++;
	}
	return (dst);
}
