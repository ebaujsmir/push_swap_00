/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_min_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:37:06 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:37:08 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_min_max(t_stack *stack)
{
	t_stack_node	*temp;
	int				min;
	int				max;

	temp = NULL;
	min = stack->head->index;
	max = stack->head->index;
	while (stack->head != temp)
	{
		if (temp == NULL)
			temp = stack->head->next;
		if (temp->index > max)
			max = temp->index;
		if (temp->index < min)
			min = temp->index;
		temp = temp->next;
	}
	stack->id_min = min;
	stack->id_max = max;
}
