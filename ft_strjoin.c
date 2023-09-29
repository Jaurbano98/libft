/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <jaurbano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:55:02 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/29 15:05:50 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	cont1;
	size_t	cont2;

	cont1 = 0;
	cont2 = 0;
	if (!s1 || !s2)
		return (NULL);
	ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	while (cont1 < ft_strlen(s1))
	{
		ptr[cont1] = s1[cont1];
		cont1++;
	}
	while (cont2 < ft_strlen(s2))
	{
		ptr[cont1 + cont2] = s2[cont2];
		cont2++;
	}
	ptr[cont1 + cont2] = '\0';
	return (ptr);
}
