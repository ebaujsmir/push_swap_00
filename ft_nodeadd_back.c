/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:14:45 by esmirnov          #+#    #+#             */
/*   Updated: 2021/12/20 12:48:19 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_nodeadd_back(t_stack *stack, t_stack_node *new)
{
	t_stack_node	*temp;

	if (!stack || !new)
		return ;
	if (stack->head != NULL)
	{
		temp = stack->head->prev;
		temp->next = new;
		new->prev = temp;
		new->next = stack->head;
		stack->head->prev = new;
	}
	else
	{
		stack->head = new;
		new->next = new;
		new->prev = new;
	}
	stack->size++;
	stack_min_max(stack);
}

/*
** DESCRIPTION:
** 	Adds the element ’new’ at the end of the list.
*/