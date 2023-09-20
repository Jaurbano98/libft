/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:20:37 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/14 12:11:44 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		if (*(unsigned char *)(s) == (unsigned char)c)
			return (s);
		else
		{
			cont++;
			s++;
		}
	}
	return (NULL);
}
