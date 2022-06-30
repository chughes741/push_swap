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

void	quick_to_b(void)
{
	t_data	*data;
	int		i;

	data = get_data();
	i = 0;
	data->chunk /= 2;
	while (i < data->chunk)
	{
		if (data->stack_a[0] >= data->chunk)
		{
			push_b();
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
			swap_a(0);
		else
			rotate_a(0);
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

void	insert_sort(void)
{
	return ; // ! TESTING
	t_data	*data;

	data = get_data();
	while (data->n_a)
	{
		while (lowest_a() != 0)
		{
			if (highest_a() != 0)
			{
				if (lowest_a() < data->n_a / 2)
					rotate_a(0);
				else
					r_rotate_a(0);
			}
			else
			{
				push_b();
				rotate_b(0);
			}
		}
		push_b();
	}
	while (highest_b() != 0)
		r_rotate_b(0);
	while (data->n_b)
		push_a();
	return ;
}

void	list_moves(void)
{
	t_data	*data;

	data = get_data();
	while (data->chunk > 25)
		quick_to_b();
	swap_sort_a();
	insert_to_a();
	while (data->stack_a[0])
		rotate_a(false);
	insert_sort();
	return ;
}
