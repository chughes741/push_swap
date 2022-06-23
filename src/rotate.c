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
void	rotate_a(t_array *var) // TODO add move to ->moves
{
	int	temp;
	int	i;

	if (var->n_a <= 1)
		return ;
	i = -1;
	temp = var->stack_a[0];
	while (++i < var->n_a - 1)
		var->stack_a[i] = var->stack_a[i + 1];
	var->stack_a[i] = temp;
	return ;
}

// Shift all elements up in stack_b, first becomes the last
void	rotate_b(t_array *var) // TODO add move to ->moves
{
	int	temp;
	int	i;

	if (var->n_b <= 1)
		return ;
	i = -1;
	temp = var->stack_b[0];
	while (++i < var->n_b - 1)
		var->stack_b[i] = var->stack_b[i + 1];
	var->stack_b[i] = temp;
	return ;
}

void	rotate_both(t_array *var) // TODO add move to ->moves
{
	rotate_a(var);
	rotate_b(var);
}
