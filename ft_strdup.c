/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:48:36 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/14 15:56:00 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		cont;
	char	*dest;

	dest = malloc(sizeof(char) * (ft_strlen(src)+1));
	cont = 0;
	if (dest == NULL)
		return (0);
	else
	{
		while (src[cont] != '\0')
		{
			dest[cont] = src[cont];
			cont = cont + 1;
		}
		dest[cont] = '\0';
		return (dest);
	}
}
