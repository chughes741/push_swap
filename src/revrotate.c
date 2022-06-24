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
void	r_rotate_a(void)
{
	t_data	*data;
	int	temp;

	data = get_data();
	if (data->n_a <= 1)
		return ;
	temp = data->stack_a[data->n_a - 1];
	while (--data->n_a)
		data->stack_a[data->n_a] = data->stack_a[data->n_a - 1];
	data->stack_a[0] = temp;
	ft_str_append(data->moves, "rra ");
	return ;
}

// Shift all elements down in the stack_b, last becomes the first
void	r_rotate_b(void)
{
	t_data	*data;
	int	temp;

	data = get_data();
	if (data->n_b <= 1)
		return ;
	temp = data->stack_b[data->n_b - 1];
	while (--data->n_b)
		data->stack_b[data->n_b] = data->stack_b[data->n_b - 1];
	data->stack_b[0] = temp;
	ft_str_append(data->moves, "rrb ");
	return ;
}

// Shifts all elements down one in both stacks
void	r_rotate_both(void)
{
	r_rotate_a();
	r_rotate_b();
	return ;
}
