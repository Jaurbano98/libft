/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:15:48 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/15 13:40:10 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
		cont++;
	return (cont);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d\n", ft_strlen("Hola"));
	printf("%lu\n", strlen("Hola"));
}
*/
