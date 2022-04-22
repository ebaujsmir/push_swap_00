/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:37:41 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:37:43 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_reverse_rotate(t_stack *stack, char c)
{
	stack->head = stack->head->prev;
	if (c == 'a')
		write (1, "rra\n", 4);
	if (c == 'b')
		write (1, "rrb\n", 4);
}
