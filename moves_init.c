/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:06:24 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/20 13:08:11 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_moves	*moves_init(t_stack *stack_a, t_stack *stack_b)
{
	t_moves	*moves;

	moves = malloc (sizeof(t_moves));
	if (moves == NULL)
		exit(EXIT_FAILURE);
	moves->moves_sum = stack_a->size + stack_b->size;
	moves->i = stack_a->size;
	moves->j = stack_b->size;
	return (moves);
}
