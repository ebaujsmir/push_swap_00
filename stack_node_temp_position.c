/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_node_temp_position.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:37:16 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:37:20 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*stack_node_temp_position(t_stack *stack, int i)
{
	int				x;
	t_stack_node	*temp;

	temp = stack->head;
	if (i > 0)
	{
		x = 0;
		while (x < i)
		{
			temp = temp->next;
			x++;
		}
	}
	return (temp);
}
