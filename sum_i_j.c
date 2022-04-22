/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_i_j.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:20:46 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/20 11:20:48 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_moves	*sum_i_j(int i, int j, t_stack *stack_a, t_stack *stack_b)
{
	int		size_a;
	int		size_b;
	t_moves	*tmp_mov;

	tmp_mov = moves_init(stack_a, stack_b);
	size_a = stack_a->size;
	size_b = stack_b->size;
	if (i < size_a + 1 && j < size_b / 2 + 1)
		moves_update(i, j, i + j, tmp_mov);
	else if (i > size_a / 2 && j > size_b / 2)
		moves_update(i - size_a, j - size_b, size_a - i + size_b - j, tmp_mov);
	else if (i < size_a / 2 + 1 && j > size_b / 2)
		moves_update(i, j - size_b, i + size_b - j, tmp_mov);
	else
		moves_update(i - size_a, j, size_a - i + j, tmp_mov);
	return (tmp_mov);
}
