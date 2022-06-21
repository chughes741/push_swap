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
	while (in_order(array))
	{
		if (array->stack_a[0] > array->stack_a[1] && array->stack_a[1])
		{
			swap(array->stack_a, array->size);
			ft_printf("sa\n");
			rrotate(array->stack_a, array->size);
			ft_printf("rra\n");
		}
		else
		{
			rotate(array->stack_a, array->size);
			ft_printf("ra\n");
		}
	}
	return ;
}
