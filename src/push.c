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
void	push_a(t_array *var)
{
	int	i;

	if (var->n_b == 0)
		return ;
	while (--var->n_a)
		var->stack_a[var->n_a] = var->stack_a[var->n_a - 1];
	var->stack_a[0] = var->stack_b[0];
	i = -1;
	while (++i < var->n_b - 1)
		var->stack_b[i] = var->stack_b[i + 1];
	var->n_a += 1;
	var->n_b -= 1;
	ft_str_append(var->moves, "pa ");
	return ;	
}

// Push top element from stack_a to stack_b
void	push_b(t_array *var)
{
	int	i;

	if (var->n_a == 0)
		return ;
	while (--var->n_b)
		var->stack_b[var->n_b] = var->stack_b[var->n_b - 1];
	var->stack_b[0] = var->stack_a[0];
	i = -1;
	while (++i < var->n_a - 1)
		var->stack_a[i] = var->stack_a[i + 1];
	var->n_a -= 1;
	var->n_b += 1;
	ft_str_append(var->moves, "pb ");
	return ;	
}