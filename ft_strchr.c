/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:36:01 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/15 14:47:37 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "asdfghj";
   const char ch = 'f';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("Caracter %c puntero %p cadena %s\n", ch, ret, ret);

   return(0);
}
*/
