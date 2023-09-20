/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:59:38 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/13 12:58:45 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if (ft_isdigit(a) || ft_isalpha(a))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum('p'));
	printf("%d\n", ft_isalnum('!'));
}
*/
