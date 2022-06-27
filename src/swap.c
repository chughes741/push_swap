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
void	swap_a(void)
{
	t_data	*data;
	int	temp;

	data = get_data();
	print_stacks(); // TESTING
	if (data->n_a <= 1)
		return ;
	temp = data->stack_a[0];
	data->stack_a[0] = data->stack_a[1];
	data->stack_a[1] = temp;
	data->moves = ft_str_prepend(data->moves, "sa\n");
	print_stacks(); // TESTING
	return ;
}

// Swaps the first two elements of stack_b
void	swap_b(void)
{
	t_data	*data;
	int	temp;

	data = get_data();
	print_stacks(); // TESTING
	if (data->n_b <= 1)
		return ;
	temp = data->stack_b[0];
	data->stack_b[0] = data->stack_b[1];
	data->stack_b[1] = temp;
	data->moves = ft_str_prepend(data->moves, "sb\n");
	print_stacks(); // TESTING
	return ;
}

// Swaps both stacks top two elements
void	swap_both(void)
{
	print_stacks(); // TESTING
	swap_a();
	swap_b();
	print_stacks(); // TESTING
	return ;
}