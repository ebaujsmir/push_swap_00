/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_initialisation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:36:34 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/15 14:36:36 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_initialisation(void)
{
	t_stack	*temp;

	temp = malloc(sizeof(t_stack));
	if (temp == NULL)
		exit(EXIT_FAILURE);
	temp->size = 0;
	temp->id_min = 0;
	temp->id_max = 0;
	temp->head = NULL;
	return (temp);
}
