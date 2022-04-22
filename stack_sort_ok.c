/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort_ok.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:38:45 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:38:47 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_sort_ok(t_stack *stack)
{
	int				i;
	int				a;
	t_stack_node	*temp;

	temp = stack->head;
	i = stack->size - 1;
	a = 0;
	while (i > 0)
	{
		if (temp->value > temp->next->value)
			a = 1;
		temp = temp->next;
		i--;
	}
	return (a);
}
