/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:37:31 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:37:33 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_push(t_stack *stack_1, t_stack *stack_2, char c)
{
	t_stack_node	*temp;

	if (stack_2->size != 0)
	{
		temp = ft_popnode_front(stack_2);
		ft_nodeadd_front(stack_1, temp);
		if (c == 'a')
			write (1, "pa\n", 3);
		if (c == 'b')
			write (1, "pb\n", 3);
	}
}

/* take the first element of the stack_2 and put it to the top of the stack 1 */
/* do nothing if stack_2 is empty */
/* means push to stack_1 the first element of stack_2*/
/* pa for stack_1 = stack_a, stack_2 = stack_b: char c = a */
/* pb for stack_1 = stack_b *, stack_2 = stack_a: char c = b */
