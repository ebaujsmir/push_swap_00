/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:37:54 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:37:55 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_rotate(t_stack *stack, char c)
{
	stack->head = stack->head->next;
	if (c == 'a')
		write (1, "ra\n", 3);
	if (c == 'b')
		write (1, "rb\n", 3);
}
