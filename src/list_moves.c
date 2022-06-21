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

static int	in_order(unsigned *stack, unsigned size)
{
	unsigned	n;

	n = -1;
	while (++n < size)
	{
		if (stack[n] != n)
			return (1);
	}
	return (0);
}

static void	split_stack(t_array *array)
{
	unsigned	i;
	unsigned	half_length;

	i = 0;
	half_length = array->size / 2;
	while (i < half_length)
	{
		if (array->stack_a[0] < half_length)
		{
			push(array->stack_a, array->stack_b, array->n_a, array->n_b);
			printf("pb");
			array->n_a -= 1;
			array->n_b += 1;
			i++;
		}
		else
		{
			rotate(array->stack_a, array->n_a);
			printf("ra");
		}
	}
	return ;
}

static void	swap_sort(unsigned *stack, unsigned size)
{
	while (in_order(stack, size))
	{
		if (stack[0] > stack[1] && stack[1])
		{
			swap(stack, size);
			ft_printf("sa\n");
			rrotate(stack, size);
			ft_printf("rra\n");
		}
		else
		{
			rotate(stack, size);
			ft_printf("ra\n");
		}
	}
	return ;
}

static void	merge_stack(t_array *array)
{
	unsigned	i;

	i = array->n_b + 1;
	while (--i)
	{
		push(array->stack_b, array->stack_a, array->n_b, array->n_b);
		printf("pa");
		array->n_a += 1;
		array->n_b += 1;
	}
	return ;
}

void	list_moves(t_array *array)
{
	split_stack(array);
	swap_sort(array->stack_b, array->size);
	swap_sort(array->stack_a, array->size);
	merge_stack(array);
	return ;
}
