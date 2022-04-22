/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_to_do.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:05:29 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/20 11:05:32 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	moves_to_do(t_stack *stack_a, t_stack *stack_b, t_moves *moves)
{
	int		i;
	int		j;
	t_moves	*tmp_moves;

	i = 0;
	while (i < stack_a->size)
	{
		j = 0;
		while (j < stack_b->size)
		{
			if (can_i_push(stack_a, stack_b, i, j) == 1)
			{
				tmp_moves = sum_i_j(i, j, stack_a, stack_b);
				if (tmp_moves->moves_sum < moves->moves_sum)
					moves_swap(tmp_moves, moves);
				free(tmp_moves);
			}
			j++;
		}
		i++;
	}
}

void	moves_swap(t_moves *tmp_moves, t_moves *moves)
{
	moves->moves_sum = tmp_moves->moves_sum;
	moves->i = tmp_moves->i;
	moves->j = tmp_moves->j;
}
