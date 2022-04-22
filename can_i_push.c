/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   can_i_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:33:32 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:33:36 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	can_i_push(t_stack *stack_a, t_stack *stack_b, int i, int j)
{
	int				b;	
	t_stack_node	*tmp_a;
	t_stack_node	*tmp_b;			

	tmp_a = stack_node_temp_position(stack_a, i);
	tmp_b = stack_node_temp_position(stack_b, j);
	b = tmp_b->index;
	if (is_new_minmax(tmp_a, tmp_b, stack_a) == 1)
		return (1);
	else if (check_id_min_max(tmp_a, stack_a) == 1)
		return (0);
	else if (tmp_a->index - tmp_a->prev->index > 1)
	{
		if (b < tmp_a->index && b > tmp_a->prev->index)
			return (1);
	}
	else if (tmp_a->index - tmp_a->prev->index < -1)
	{
		if (b > tmp_a->index && b < tmp_a->prev->index)
			return (1);
	}
	return (0);
}

/* to check if we can push from stack_b to stack_a with position i and j*/
