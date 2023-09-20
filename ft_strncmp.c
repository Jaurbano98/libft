/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:59:37 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/15 16:02:12 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cont;

	cont = 0;
	while ((s1[cont] != '\0' || s2[cont] != '\0') && (cont < n))
	{
		if ((unsigned char)s1[cont] < (unsigned char)s2[cont])
			return (-1);
		else if ((unsigned char)s1[cont] > (unsigned char)s2[cont])
			return (1);
		cont = cont + 1;
	}
	return (0);
}
