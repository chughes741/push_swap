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

#include "../include/push_swap.h"

void	quick_to_b(void)
{
	t_data	*data;
	int		i;
	int		mid;

	data = get_data();
	i = 0;
	data->chunk /= 2;
	mid = (data->n_a - data->chunk) + (data->chunk / 2);

	while (i < data->chunk)
	{
		if (data->stack_a[0] >= data->chunk)
		{
			push_b();
			if (data->stack_a[0] < data->chunk && data->stack_b[0] < mid)
				rotate_both();
			else if (data->stack_b[0] < mid)
				rotate_b(false);
			i++;
		}
		else
			rotate_a(false);

	}
}

void	swap_sort_a(void)
{
	t_data	*data;

	data = get_data();
	while(!finished())
	{
		if (data->stack_a[0] > data->stack_a[1] && data->stack_a[1])
			swap_a(false);
		else
			rotate_a(false);
	}
}

void	insert_to_a(void)
{
	t_data	*data;

	data = get_data();
	while (data->n_b)
	{
		while (data->stack_a[data->n_a - 1] > data->stack_b[0])
			r_rotate_a(false);
		push_a();
		while (data->stack_a[0] && data->stack_a[0] < data->stack_b[0])
			rotate_a(false);
	}
}

void	list_moves(void)
{
	t_data	*data;

	data = get_data();
	while (data->chunk > 3)
		quick_to_b();
	swap_sort_a();
	insert_to_a();
	if (lowest_a() < data->n_a / 2)
	{
		while (data->stack_a[0])
			rotate_a(false);
	}
	else
	{
		while (data->stack_a[0])
			r_rotate_a(false);

	}
	return ;
}
