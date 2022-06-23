/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:59:50 by chughes           #+#    #+#             */
/*   Updated: 2022/06/22 12:59:52 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Push top element from stack_b to stack_a
void	push_a(t_array *array) // TODO add move to ->moves and ++/-- to sizes
{
	int	i;

	if (array->n_b == 0)
		return ;
	while (--array->n_a)
		array->stack_a[array->n_a] = array->stack_a[array->n_a - 1];
	array->stack_a[0] = array->stack_b[0];
	i = -1;
	while (++i < array->n_b - 1)
		array->stack_b[i] = array->stack_b[i + 1];
	return ;	
}

// Push top element from stack_a to stack_b
void	push_b(t_array *array) // TODO add move to ->moves and ++/-- to sizes
{
	int	i;

	if (array->n_a == 0)
		return ;
	while (--array->n_b)
		array->stack_b[array->n_b] = array->stack_b[array->n_b - 1];
	array->stack_b[0] = array->stack_a[0];
	i = -1;
	while (++i < array->n_a - 1)
		array->stack_a[i] = array->stack_a[i + 1];
	return ;	
}