/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:38:20 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:38:22 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stacks_moves(t_stack *stack_a, t_stack *stack_b, t_moves *moves)
{
	int	i;
	int	j;

	i = moves->i;
	j = moves->j;
	if (i >= 0 && j >= 0)
		do_stacks_rot(stack_a, stack_b, moves);
	else if (i < 0 && j < 0)
		do_stacks_rev_rot(stack_a, stack_b, moves);
	else if (i >= 0 && j < 0)
		do_stacks_mixarot(stack_a, stack_b, moves);
	else if (i < 0 && j >= 0)
		do_stacks_mixbrot(stack_a, stack_b, moves);
	stack_push(stack_a, stack_b, 'a');
}

void	do_stacks_rot(t_stack *stack_a, t_stack *stack_b, t_moves *moves)
{
	int	rot_i;
	int	rot_j;

	rot_i = moves->i;
	rot_j = moves->j;
	while (rot_i > 0)
	{
		stack_rotate(stack_a, 'a');
		rot_i--;
	}
	while (rot_j > 0)
	{
		stack_rotate(stack_b, 'b');
		rot_j--;
	}
}

void	do_stacks_rev_rot(t_stack *stack_a, t_stack *stack_b, t_moves *moves)
{
	int	rot_i;
	int	rot_j;

	rot_i = moves->i;
	rot_j = moves->j;
	while (rot_i < 0)
	{
		stack_reverse_rotate(stack_a, 'a');
		rot_i++;
	}
	while (rot_j < 0)
	{
		stack_reverse_rotate(stack_b, 'b');
		rot_j++;
	}
}

void	do_stacks_mixarot(t_stack *stack_a, t_stack *stack_b, t_moves *moves)
{
	int	rot_i;
	int	rot_j;

	rot_i = moves->i;
	rot_j = moves->j;
	while (rot_i > 0)
	{
		stack_rotate(stack_a, 'a');
		rot_i--;
	}
	while (rot_j < 0)
	{
		stack_reverse_rotate(stack_b, 'b');
		rot_j++;
	}
}

void	do_stacks_mixbrot(t_stack *stack_a, t_stack *stack_b, t_moves *moves)
{
	int	rot_i;
	int	rot_j;

	rot_i = moves->i;
	rot_j = moves->j;
	while (rot_i < 0)
	{
		stack_reverse_rotate(stack_a, 'a');
		rot_i++;
	}
	while (rot_j > 0)
	{
		stack_rotate(stack_b, 'b');
		rot_j--;
	}
}
