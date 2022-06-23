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

	n = -1;
	while (++n < size)
	{
		if (stack[n] != n)
			return (1);
	}
	return (0);
}

static void	split_stack(t_data *var)
{
	int	i;
	int	half_length;

	i = 0;
	half_length = var->n_a / 2;
	while (i < half_length)
	{
		if (var->stack_a[0] < half_length)
		{
			push_b(var);
			i++;
		}
		else
			rotate_a(var);
	}
	return ;
}

static void	swap_sort_a(t_data *var)
{
	while (in_order(var->stack_a, var->n_a))
	{
		if (var->stack_a[0] > var->stack_a[1] && var->stack_a[1])
		{
			swap_a(var);
			r_rotate_a(var);
		}
		else
			rotate_a(var);
	}
	return ;
}

static void	swap_sort_b(t_data *var)
{
	while (in_order(var->stack_b, var->n_b))
	{
		if (var->stack_b[0] > var->stack_b[1] && var->stack_b[1])
		{
			swap_b(var);
			r_rotate_b(var);
		}
		else
			rotate_b(var);
	}
	return ;
}

static void	merge_stack(t_data *var)
{
	int	i;

	i = var->n_b + 1;
	while (--i)
		push_a(var);
	return ;
}

void	list_moves(t_data *var)
{
	split_stack(var);
	swap_sort_a(var);
	swap_sort_b(var);
	merge_stack(var);
	return ;
}
