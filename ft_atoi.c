/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_limits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:34:30 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:34:32 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atoi(const char *str)
{
	int			i;
	int long	sign;
	int long	result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[0] == '\0')
	{
		ft_print_error();
		exit(EXIT_FAILURE);
	}
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str [i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str [i] <= '9')
		result = result * 10 + (str[i++] - '0');
	return (result * sign);
}
