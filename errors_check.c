/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:34:04 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:34:07 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_digit(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (argv[i][0] == '-' || argv[i][0] == '+')
			j++;
		if (argv[i][j] == '\0')
			return (1);
		while (argv[i][j])
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				j++;
			else
				return (1);
		}
		i++;
	}		
	return (0);
}

int	ft_check_double(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_argv_min_max(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) > INT_MAX || ft_atoi(argv[i]) < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_argv_sorted(char **argv)
{
	int	i;

	i = 1;
	while (argv[i + 1] != NULL)
	{
		if (ft_atoi(argv[i]) > ft_atoi(argv[i + 1]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_arg(int argc, char **argv)
{
	if (argc == 1)
		return (1);
	else if (ft_check_digit(argv) == 1)
	{
		ft_print_error();
		return (1);
	}
	else if (ft_check_double (argv) == 1)
	{
		ft_print_error();
		return (1);
	}
	else if (ft_check_argv_min_max (argv) == 1)
	{
		ft_print_error();
		return (1);
	}
	else
		return (0);
}
