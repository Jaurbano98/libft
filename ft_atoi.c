/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaurbano <jaurbano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:58:43 by jaurbano          #+#    #+#             */
/*   Updated: 2023/09/20 12:57:28 by jaurbano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	cont;
	int	negative;
	int	res;

	cont = 0;
	while (str[cont] == '\t' || str[cont] == '\n' || str[cont] == '\v'
		|| str[cont] == '\f' || str[cont] == '\r' || str[cont] == ' ')
		cont++;
	negative = 1;
	if (str[cont] == '-' || str[cont] == '+')
	{
		if (str[cont] == '-')
			negative = -1;
		cont++;
	}
	res = 0;
	while (str[cont] >= '0' && str[cont] <= '9')
	{
		res = res * 10 + (str[cont] - '0');
		cont++;
	}
	return (res * negative);
}
