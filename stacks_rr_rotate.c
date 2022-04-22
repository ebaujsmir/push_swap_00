/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rr_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:54:23 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:54:25 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stacks_rr_rotate(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->head = stack_a->head->next;
	stack_b->head = stack_b->head->next;
	write (1, "rr\n", 3);
}
