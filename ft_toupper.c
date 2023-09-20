/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:43:32 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/13 12:49:16 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("%d\n", ft_toupper('a'));
	printf("%d\n", ft_toupper('z'));
	printf("%d\n", toupper('a'));
	printf("%d\n", toupper('z'));
}
*/
