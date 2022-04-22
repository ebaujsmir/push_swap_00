/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_update.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:33:19 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/20 13:33:21 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	moves_update(int i, int j, int moves_sum, t_moves *moves)
{
	moves->moves_sum = moves_sum;
	moves->i = i;
	moves->j = j;
}
