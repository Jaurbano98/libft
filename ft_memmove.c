/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <jaurbano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:33:08 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/20 13:33:17 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	cont;

	if (!src && !dst)
		return (0);
	if (dst > src)
	{
		cont = (int)len;
		while (--cont >= 0)
			*(char *)(dst + cont) = *(char *)(src + cont);
	}
	else
	{
		cont = -1;
		while (++cont < (int)len)
		*(char *)(dst + cont) = *(char *)(src + cont);
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[] =   "qwertyuilk";
	char dest[] =  "popopopopopo";
	char dest2[] = "popopopopopo";

	printf("\nAntes       dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 10);
	memmove(dest2, src, 10);
	printf("ft_memmove; dest = %s, src = %s\n", dest, src);
	printf("  memmove; dest2 = %s, src = %s\n", dest2, src);


}
*/
