/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:38:33 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:38:36 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_to_sort(t_stack *stack)
{
	if (stack->size == 2)
		stack_swap(stack, 'a');
	else if (stack->size == 3)
		stack_sort_3(stack);
	else if (stack->size == 4)
		stack_sort_4(stack);
	else if (stack->size == 5)
		stack_sort_5(stack);
	else
		stack_sort(stack);
}

void	stack_sort_3(t_stack *stack)
{
	int	i;

	i = stack_sort_ok(stack);
	while (i == 1)
	{
		if (stack->head->index == stack->id_max)
			stack_rotate(stack, 'a');
		else if (stack->head->index > stack->head->next->index)
			stack_swap(stack, 'a');
		else if (stack->head->prev->index == stack->id_min)
			stack_reverse_rotate(stack, 'a');
		else if (stack->head->index == stack->id_min)
		{
			stack_reverse_rotate(stack, 'a');
			stack_swap(stack, 'a');
		}
		i = stack_sort_ok(stack);
	}
}

void	stack_sort_4(t_stack *stack_a)
{
	int		i;
	t_stack	*stack_b;

	stack_b = stack_initialisation();
	i = stack_min_pos(stack_a);
	if (stack_a->head->index > stack_a->head->next->index)
		stack_swap(stack_a, 'a');
	if (stack_sort_ok(stack_a) == 1)
	{
		if (i <= stack_a->size / 2)
		{
			while (stack_a->head->index != stack_a->id_min)
				stack_rotate(stack_a, 'a');
		}
		else
		{
			while (stack_a->head->index != stack_a->id_min)
				stack_reverse_rotate(stack_a, 'a');
		}
		stack_push(stack_b, stack_a, 'b');
		stack_sort_3(stack_a);
		stack_push(stack_a, stack_b, 'a');
	}	
	free(stack_b);
}

void	stack_sort_5(t_stack *stack_a)
{
	int		i;
	t_stack	*stack_b;

	stack_b = stack_initialisation();
	i = stack_min_pos(stack_a);
	if (stack_sort_ok(stack_a) == 1)
	{
		if (i <= stack_a->size / 2 + 1)
		{
			while (stack_a->head->index != stack_a->id_min)
				stack_rotate(stack_a, 'a');
		}
		else
		{
			while (stack_a->head->index != stack_a->id_min)
				stack_reverse_rotate(stack_a, 'a');
		}
		stack_push(stack_b, stack_a, 'b');
		stack_sort_4(stack_a);
		stack_push(stack_a, stack_b, 'a');
	}
	free (stack_b);
}

void	stack_sort(t_stack *stack_a)
{
	int				min_pos;
	t_stack			*stack_b;
	t_moves			*moves;

	stack_b = stack_initialisation();
	stack_a_push_to_b(stack_a, stack_b);
	moves = NULL;
	while (stack_b->size > 0)
	{
		free (moves);
		moves = moves_init(stack_a, stack_b);
		moves_to_do(stack_a, stack_b, moves);
		stacks_moves(stack_a, stack_b, moves);
	}
	min_pos = stack_min_pos(stack_a);
	while (stack_a->head->index != stack_a->id_min)
	{
		min_pos = stack_min_pos(stack_a);
		if (min_pos < stack_a->size / 2 + 1)
			stack_rotate(stack_a, 'a');
		else
			stack_reverse_rotate(stack_a, 'a');
	}
	free (moves);
	free (stack_b);
}
