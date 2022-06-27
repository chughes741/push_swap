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
void	rotate_a(void)
{
	t_data	*data;
	int	temp;
	int	i;

	data = get_data();
	print_stacks(); // TESTING
	if (data->n_a <= 1)
		return ;
	i = -1;
	temp = data->stack_a[0];
	while (++i < data->n_a - 1)
		data->stack_a[i] = data->stack_a[i + 1];
	data->stack_a[i] = temp;
	data->moves = ft_str_prepend(data->moves, "ra\n");
	print_stacks(); // TESTING
	return ;
}

// Shift all elements up in stack_b, first becomes the last
void	rotate_b(void)
{
	t_data	*data;
	int	temp;
	int	i;

	data = get_data();
	print_stacks(); // TESTING
	if (data->n_b <= 1)
		return ;
	i = -1;
	temp = data->stack_b[0];
	while (++i < data->n_b - 1)
		data->stack_b[i] = data->stack_b[i + 1];
	data->stack_b[i] = temp;
	data->moves = ft_str_prepend(data->moves, "rb\n");
	print_stacks(); // TESTING
	return ;
}

void	rotate_both(void)
{
	print_stacks(); // TESTING
	rotate_a();
	rotate_b();
	print_stacks(); // TESTING
	return ;
}
