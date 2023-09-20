/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <jaurbano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:28:19 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/20 13:59:51 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	cont;

	cont = 0;
	while (cont < len)
	{
		*(unsigned char *)(str + cont) = (unsigned char)c;
		cont++;
	}
	return (str);
}

/*
#include <stdio.h>
#include <string.h>

int main ()
{
   char str[50];

   strcpy(str,"eported only once for each function");
   puts(str);

   ft_memset(str,'q',(0));
   puts(str);

   char str2[50];
   
   strcpy(str2, "eported only once for each function");
   puts (str2);

   memset(str2, 'q', (0));
   puts(str2);

   
   return(0);
}
*/
