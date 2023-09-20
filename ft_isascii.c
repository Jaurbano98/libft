/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:50:26 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/13 12:59:29 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("%d\n", ft_isascii('W'));
	printf("%d\n", isascii('W'));
	//printf("%d\n", ft_isascii('Ç'));
	printf("%d\n", isascii('Ç'));
}
*/
