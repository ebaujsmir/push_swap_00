/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:19:13 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/21 10:19:15 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_free(t_stack *stack)
{
	t_stack_node	*temp_node;

	while (stack->size > 0)
	{
		temp_node = stack->head->prev;
		if (stack->size > 1)
		{
			stack->head->prev = temp_node->prev;
			stack->head->prev->next = stack->head;
			stack_min_max(stack);
		}
		else if (stack->size == 1)
		{
			stack->head = NULL;
			stack->id_min = 0;
			stack->id_max = 0;
		}
		stack->size--;
		temp_node->next = temp_node;
		temp_node->prev = temp_node;
		free (temp_node);
	}
	free (stack);
}
