/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <jaurbano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:07:29 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/30 19:59:04 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char const *string, char c)
{
	int	cont;

	cont = 0;
	while (string[cont])
		if (string[cont++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*ptr;
	size_t	len;
	size_t	k;

	i = 0;
	k = 0;
	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	while (is_set(set, s1[i]) && s1[i])
		i++;
	while (is_set(set, s1[len - 1]) && (len - 1))
		len--;
	if (len < i)
		len = i;
	ptr = malloc(len - i + 1);
	if (!ptr)
		return (NULL);
	while (i < len)
		ptr[k++] = s1[i++];
	ptr[k] = '\0';
	return (ptr);
}
