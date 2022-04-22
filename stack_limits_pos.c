/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_limits_pos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:36:45 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:36:47 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_min_pos(t_stack *stack)
{
	int				i;
	t_stack_node	*temp;

	i = 1;
	temp = stack->head;
	while (i < stack->size)
	{
		if (temp->index == stack->id_min)
			break ;
		temp = temp->next;
		i++;
	}
	return (i);
}

int	stack_max_pos(t_stack *stack)
{
	int				i;
	t_stack_node	*temp;

	i = 1;
	temp = stack->head;
	while (i < stack->size)
	{
		if (temp->index == stack->id_max)
			break ;
		temp = temp->next;
		i++;
	}
	return (i);
}
