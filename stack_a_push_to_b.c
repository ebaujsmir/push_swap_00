/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a_push_to_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:36:07 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:36:13 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_a_push_to_b(t_stack *stack_a, t_stack *stack_b)
{
	int	median;

	median = stack_median(stack_a);
	while ((stack_a->size - 1) > median && stack_a->size > 3)
	{
		if (stack_a->head->index <= median)
			stack_push(stack_b, stack_a, 'b');
		else
			stack_rotate(stack_a, 'a');
	}
	while (stack_a->size > 3)
		stack_push(stack_b, stack_a, 'b');
	stack_sort_3(stack_a);
}
