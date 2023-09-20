/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:03:47 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/13 12:49:31 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("%d\n", ft_tolower('a'));
	printf("%d\n", ft_tolower('z'));
	printf("%d\n", tolower('a'));
	printf("%d\n", tolower('z'));

	printf("%d\n", ft_tolower('A'));
	printf("%d\n", ft_tolower('Z'));
	printf("%d\n", tolower('A'));
	printf("%d\n", tolower('Z'));
}
*/
