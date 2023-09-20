/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:50:56 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/13 12:59:44 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int main(void)
{
	printf("Result when numeric character is passed: %d\n", isdigit('a'));
	printf("Result when numeric character is passed: %d\n", isdigit('a'));
	printf("Result when numeric character is passed: %d\n", isdigit('6'));
	printf("Result when numeric character is passed: %d\n", isdigit('6'));
	printf("Result when numeric character is passed: %d\n", isdigit('!'));
	printf("Result when numeric character is passed: %d\n", isdigit('!'));
}
*/
