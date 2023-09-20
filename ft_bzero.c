/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <jaurbano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:44:53 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/20 12:58:51 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		*(char *)(s + cont) = 0;
		cont++;
	}
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[50];

	strcpy(str,"Reported only once for each function");
	puts(str);

	ft_bzero(str, (7));
   	puts(str);

	char str2[50];

	strcpy(str2,"Reported only once for each function");
	puts(str2);

	bzero(str2, (7));
   	puts(str2);
}
*/
