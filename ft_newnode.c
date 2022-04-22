/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:23:09 by esmirnov          #+#    #+#             */
/*   Updated: 2022/03/31 15:44:25 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*ft_newnode(int content)
{
	t_stack_node	*new;

	new = malloc(sizeof(t_stack_node));
	if (new == NULL)
		return (NULL);
	new->value = content;
	new->index = 0;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

/*
* DESCRIPTION:
*	Allocates (with malloc(3)) and returns a new element. The variable
*	’content’ is initialized with the value of the parameter ’content’. 
*	The variable ’next’ is initialized to NULL.
*/