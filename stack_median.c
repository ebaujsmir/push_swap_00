/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_median.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:36:56 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:36:58 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_median(t_stack *stack)
{
	int		median;

	if (stack->size % 2 == 0)
		median = (stack->size - 1) / 2;
	else
		median = stack->size / 2;
	return (median);
}
