/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ids_min_max.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:33:48 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:33:53 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_new_minmax(t_stack_node *tmp_a, t_stack_node *tmp_b, t_stack *stk_a)
{
	int	a;
	int	a_prev;
	int	b;
	int	min;
	int	max;

	a = tmp_a->index;
	a_prev = tmp_a->prev->index;
	b = tmp_b->index;
	min = stk_a->id_min;
	max = stk_a->id_max;
	if (b < min && a == min && a_prev == max)
		return (1);
	else if (b < min && a == max && a_prev == min)
		return (1);
	else if (b > max && a == min && a_prev == max)
		return (1);
	else if (b > max && a == max && a_prev == min)
		return (1);
	else
		return (0);
}

/* check if the index from stack_b will be the new max or new min for stack_a */
