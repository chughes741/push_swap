/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:00:01 by chughes           #+#    #+#             */
/*   Updated: 2022/06/22 13:00:03 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Swaps the first two elements of stack_a
void	swap_a(t_array *array)
{
	unsigned	temp;

	if (array->n_a <= 1)
		return ;
	temp = array->stack_a[0];
	array->stack_a[0] = array->stack_a[1];
	array->stack_a[1] = temp;
	return ;
}

// Swaps the first two elements of stack_b
void	swap_b(t_array *array)
{
	unsigned	temp;

	if (array->n_b <= 1)
		return ;
	temp = array->stack_b[0];
	array->stack_b[0] = array->stack_b[1];
	array->stack_b[1] = temp;
	return ;
}

// Swaps both stacks top two elements
void	swap_both(t_array *array)
{
	swap_a(array);
	swap_b(array);
	return ;
}