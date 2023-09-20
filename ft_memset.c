/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <jaurbano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:15:28 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/20 23:19:24 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	cont;

	cont = 0;
	while (cont < len)
	{
		*(unsigned char *)(b + cont) = (unsigned char)c;
		cont++;
	}
	return (b);
}
