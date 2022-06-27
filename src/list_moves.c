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


static void	split_stack(void)
{
	t_data	*data;
	int	i;
	int	half_length;

	data = get_data();
	i = 0;
	half_length = data->n_a / 2;
	while (i < half_length)
	{
		if (data->stack_a[0] < half_length)
		{
			push_b();
			i++;
		}
		else if (data->stack_a[0] > data->stack_a[1] && lowest_a() != 1)
		{
			if (data->stack_b[0] < data->stack_b[1] && highest_b() != 1)
				swap_both();
			else
				swap_a(0);
		}
		r_rotate_a(0);
	}
	return ;
}

static void	swap_sort_a(void)
{
	t_data	*data;

	data = get_data();
	while (in_order_a())
	{
		if (data->stack_a[0] > data->stack_a[1] && lowest_a() != 1)
		{
			swap_a(0);
			r_rotate_a(0);
		}
		else
			rotate_a(0);
	}
	return ;
}

static void	swap_sort_b(void)
{
	return;
	t_data	*data;

	data = get_data();
	while (in_order_b())
	{
		if (data->stack_b[0] == data->stack_a[0] - 1)
			push_a();
		if (data->stack_b[0] < data->stack_b[1] && highest_b() != 1)
		{
			swap_b(0);
			r_rotate_b(0);
		}
		else
			rotate_b(0);
	}
	return ;
}

static void	swap_sort(void)
{
	t_data	*data;

	data = get_data();
	while (in_order_a() || in_order_b())
	{
		if ((data->stack_a[0] > data->stack_a[1] && lowest_a() != 1) &&\
		(data->stack_b[0] < data->stack_b[1] && highest_b() != 1))
		{
			swap_both();
			r_rotate_both();
		}
		else if (data->stack_a[0] > data->stack_a[1] && lowest_a() != 1)
		{
			swap_a(0);
			r_rotate_a(0);
			rotate_b(0);
		}
		else if (data->stack_b[0] < data->stack_b[1] && highest_b() != 1)
		{
			swap_b(0);
			r_rotate_b(0);
			rotate_a(0);
		}
		else
			rotate_both();
	}
}

static void	merge_stack(void)
{
	t_data	*data;
	int	i;

	data = get_data();
	i = data->n_b + 1;
	while (--i)
		push_a();
	return ;
}

void	list_moves(void)
{
	split_stack();
	swap_sort();
	swap_sort_b();
	merge_stack();
	swap_sort_a();
	return ;
}
