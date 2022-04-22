/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:38:58 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:39:00 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_swap(t_stack *stack, char c)
{
	int	temp_value;
	int	temp_index;

	if (stack->size <= 1)
		return ;
	temp_value = stack->head->value;
	temp_index = stack->head->index;
	stack->head->value = stack->head->next->value;
	stack->head->index = stack->head->next->index;
	stack->head->next->value = temp_value;
	stack->head->next->index = temp_index;
	if (c == 'a')
		write (1, "sa\n", 3);
	if (c == 'b')
		write (1, "sb\n", 3);
}
