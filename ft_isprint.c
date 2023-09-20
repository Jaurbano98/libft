/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:06:49 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/13 13:00:01 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", ft_isprint('C'));
	printf("%d\n", isprint('C'));
	printf("%d\n", ft_isprint(0));
	printf("%d\n", isprint(0));
}
*/
