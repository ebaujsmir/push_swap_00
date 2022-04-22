/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_id_min_max.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:05:13 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/20 17:05:15 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_id_min_max(t_stack_node *tmp_a, t_stack *stack_a)
{
	int	a;
	int	a_prev;
	int	min;
	int	max;

	a = tmp_a->index;
	a_prev = tmp_a->prev->index;
	min = stack_a->id_min;
	max = stack_a->id_max;
	if (a == min && a_prev == max)
		return (1);
	else if (a == max && a_prev == min)
		return (1);
	else
	{	
		return (0);
	}
}
/* check if we push the index from stack_b between min and max */
