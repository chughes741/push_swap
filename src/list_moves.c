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

static int	in_order(int *stack, int size)
{
	int	n;

	n = 0;
	while (++n < size)
	{
		if (stack[n] <= stack[n - 1])
			return (1);
	}
	return (0);
}

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
		else
			rotate_a();
	}
	return ;
}

static void	swap_sort_a(void)
{
	t_data	*data;

	data = get_data();
	while (in_order(data->stack_a, data->n_a))
	{
		if (data->stack_a[0] > data->stack_a[1] && data->stack_a[1])
		{
			swap_a();
			r_rotate_a();
		}
		else
			rotate_a();
	}
	return ;
}

static void	swap_sort_b(void)
{
	t_data	*data;

	data = get_data();
	while (in_order(data->stack_b, data->n_b))
	{
		if (data->stack_b[0] > data->stack_b[1] && data->stack_b[1])
		{
			swap_b();
			r_rotate_b();
		}
		else
			rotate_b();
	}
	return ;
}

static void	merge_stack(void)
{
	t_data	*data;
	int	i;

	data = get_data();
	i = data->n_b + 1;
	while (--i)
	{
		r_rotate_b();
		push_a();
	}
	return ;
}

void	list_moves(void)
{
	t_data	*data;

	data = get_data();
	split_stack();
	swap_sort_a();
	swap_sort_b();
	merge_stack();
	return ;
}
