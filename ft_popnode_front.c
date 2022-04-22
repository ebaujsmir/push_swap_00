/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_popnode_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:35:16 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:35:19 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*ft_popnode_front(t_stack *stack)
{
	t_stack_node	*temp_node;

	if (!stack)
		return (NULL);
	temp_node = stack->head;
	if (stack->size > 1)
	{
		stack->head = temp_node->next;
		stack->head->prev = temp_node->prev;
		stack->head->prev->next = stack->head;
		stack_min_max(stack);
	}
	else
	{
		stack->head = NULL;
		stack->id_min = 0;
		stack->id_max = 0;
	}
	stack->size--;
	temp_node->next = temp_node;
	temp_node->prev = temp_node;
	return (temp_node);
}
