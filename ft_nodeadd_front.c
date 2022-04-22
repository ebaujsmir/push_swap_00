/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodeadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:34:56 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:34:58 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_nodeadd_front(t_stack *stack, t_stack_node *new)
{
	t_stack_node	*temp;

	if (!stack || !new)
		return ;
	if (stack->head != NULL)
	{
		temp = stack->head;
		stack->head = new;
		new->prev = temp->prev;
		new->next = temp;
		temp->prev->next = new;
		temp->prev = new;
	}
	else
	{
		stack->head = new;
		new->next = new;
		new->prev = new;
	}
	stack->size++;
	stack_min_max(stack);
	return ;
}

/*
** DESCRIPTION:
** 	Adds the element ’new’ at the beginning of the list.
*/
