/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:00:14 by chughes           #+#    #+#             */
/*   Updated: 2022/06/20 15:00:16 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

#define SA 1
#define SB 2
#define SS 3
#define PA 4
#define PB 5
#define RA 6
#define RB 7
#define RR 8
#define RRA 9
#define RRB 10
#define RRR 11

static int	in_order(t_array *array)
{
	unsigned	n;

	n = -1;
	while (++n < array->size)
	{
		if (array->stack_a[n] != n)
			return (1);
	}
	return (0);
}

void	list_moves(t_array *array)
{
	array->slow_moves = ft_calloc(1, sizeof(unsigned));
	while (in_order(array))
	{
		if (array->stack_a[0] > array->stack_a[1] && array->stack_a[1])
		{
			swap(array->stack_a, array->size);
			array->slow_moves = uijoin(&array->slow_moves, SA);
			rrotate(array->stack_a, array->size);
			array->slow_moves = uijoin(&array->slow_moves, RRA);
		}
		else
		{
			rotate(array->stack_a, array->size);
			array->slow_moves = uijoin(&array->slow_moves, RA);
		}
	}
	return ;
}
