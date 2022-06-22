/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:12:54 by chughes           #+#    #+#             */
/*   Updated: 2022/06/22 13:12:56 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Shift all elements down in the stack_a, last becomes the first
void	r_rotate_a(t_array *array)
{
	unsigned	temp;

	if (array->n_a <= 1)
		return ;
	temp = array->stack_a[array->n_a - 1];
	while (--array->n_a)
		array->stack_a[array->n_a] = array->stack_a[array->n_a - 1];
	array->stack_a[0] = temp;
	return ;
}

// Shift all elements down in the stack_b, last becomes the first
void	r_rotate_b(t_array *array)
{
	unsigned	temp;

	if (array->n_b <= 1)
		return ;
	temp = array->stack_b[array->n_b - 1];
	while (--array->n_b)
		array->stack_b[array->n_b] = array->stack_b[array->n_b - 1];
	array->stack_b[0] = temp;
	return ;
}

// Shifts all elements down one in both stacks
void	r_rotate_both(t_array *array)
{
	r_rotate_a(array);
	r_rotate_b(array);
	return ;
}
