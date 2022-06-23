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
void	swap_a(t_array *var) // TODO add move to ->moves
{
	int	temp;

	if (var->n_a <= 1)
		return ;
	temp = var->stack_a[0];
	var->stack_a[0] = var->stack_a[1];
	var->stack_a[1] = temp;
	return ;
}

// Swaps the first two elements of stack_b
void	swap_b(t_array *var) // TODO add move to ->moves
{
	int	temp;

	if (var->n_b <= 1)
		return ;
	temp = var->stack_b[0];
	var->stack_b[0] = var->stack_b[1];
	var->stack_b[1] = temp;
	return ;
}

// Swaps both stacks top two elements
void	swap_both(t_array *var) // TODO add move to ->moves
{
	swap_a(var);
	swap_b(var);
	return ;
}