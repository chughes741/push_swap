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
void	r_rotate_a(t_array *var) // TODO add move to ->moves
{
	int	temp;

	if (var->n_a <= 1)
		return ;
	temp = var->stack_a[var->n_a - 1];
	while (--var->n_a)
		var->stack_a[var->n_a] = var->stack_a[var->n_a - 1];
	var->stack_a[0] = temp;
	return ;
}

// Shift all elements down in the stack_b, last becomes the first
void	r_rotate_b(t_array *var) // TODO add move to ->moves
{
	int	temp;

	if (var->n_b <= 1)
		return ;
	temp = var->stack_b[var->n_b - 1];
	while (--var->n_b)
		var->stack_b[var->n_b] = var->stack_b[var->n_b - 1];
	var->stack_b[0] = temp;
	return ;
}

// Shifts all elements down one in both stacks
void	r_rotate_both(t_array *var) // TODO add move to ->moves
{
	r_rotate_a(var);
	r_rotate_b(var);
	return ;
}
