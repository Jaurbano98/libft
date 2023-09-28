/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <jaurbano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:14:23 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/28 16:30:24 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	cont;

	cont = 0;
	ptr = (char *)malloc((ft_strlen(s) + 1));
	if (ptr == NULL)
		return (NULL);
	while (cont < ft_strlen(s)+ 1)
	{
		ptr[cont] = s[cont];
		cont++;
	}
	return (ptr);
}
