/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argv_to_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:34:17 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:34:19 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_argv_to_stack(char **argv, t_stack	*stack)
{
	int	i;
	int	nb;

	i = 1;
	while (argv[i])
	{
		nb = ft_atoi(argv[i]);
		ft_nodeadd_back(stack, ft_newnode(nb));
		i++;
	}
	stack_min_max(stack);
	return (stack);
}

/* put arguments in the nodes of stack */