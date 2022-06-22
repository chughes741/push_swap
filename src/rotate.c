/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:00:09 by chughes           #+#    #+#             */
/*   Updated: 2022/06/22 13:00:11 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Shift all elements up in stack_a, first becomes the last
void	rotate_a(t_array *array)
{
	unsigned	temp;
	unsigned	i;

	if (array->n_a <= 1)
		return ;
	i = -1;
	temp = array->stack_a[0];
	while (++i < array->n_a - 1)
		array->stack_a[i] = array->stack_a[i + 1];
	array->stack_a[i] = temp;
	return ;
}

// Shift all elements up in stack_b, first becomes the last
void	rotate_b(t_array *array)
{
	unsigned	temp;
	unsigned	i;

	if (array->n_b <= 1)
		return ;
	i = -1;
	temp = array->stack_b[0];
	while (++i < array->n_b - 1)
		array->stack_b[i] = array->stack_b[i + 1];
	array->stack_b[i] = temp;
	return ;
}

void	rotate_both(t_array *array)
{
	rotate_a(array);
	rotate_b(array);
}
