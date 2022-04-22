/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:41:15 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:41:18 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	if (ft_check_arg(argc, argv) == 1)
		exit(EXIT_FAILURE);
	if (ft_check_argv_sorted(argv) == 1)
		exit(EXIT_SUCCESS);
	stack_a = stack_initialisation();
	ft_argv_to_stack(argv, stack_a);
	stack_index(stack_a);
	stack_min_max(stack_a);
	stack_to_sort(stack_a);
	stack_free(stack_a);
	return (0);
}
