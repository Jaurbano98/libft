/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:11:14 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/13 12:59:14 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char c;
    c = 'Q';
    printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));
	printf("\nResult when uppercase alphabet is passed: %d", isalpha(c));

    c = 'q';
    printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));
	printf("\nResult when lowercase alphabet is passed: %d", isalpha(c));

    c='+';
    printf("\nResult when non-alphabetic character is passed: %d", isalpha(c));
	printf("\nResult when non-alphabetic character is passed: %d", ft_isalpha(c));
    return 0;
}
*/
