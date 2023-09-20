/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <jaurbano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:40:33 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/20 14:40:53 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	cont1;
	size_t	cont2;
	char	*str;

	cont2 = ft_strlen (s);
	cont1 = 0;
	if (!s)
		return (0);
	if (start >= cont2)
		return (ft_strdup(""));
	if (len > cont2 - start)
		len = cont2 - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	cont1 = 0;
	while (cont1 < len && s[start + cont1])
	{
		str[cont1] = s[start + cont1];
		cont1++;
	}
	str[cont1] = '\0';
	return (str);
}
