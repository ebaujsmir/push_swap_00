/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:36:22 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:36:23 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_index(t_stack *stack)
{
	int				i;
	int				j;
	t_stack_node	*a;
	t_stack_node	*b;

	i = 0;
	a = stack->head;
	while (i < stack->size)
	{
		j = 0;
		b = stack->head;
		while (j < stack->size)
		{
			if (a->value > b->value)
				a->index = a->index + 1;
			b = b->next;
			j++;
		}
		a = a->next;
		i++;
	}
}
