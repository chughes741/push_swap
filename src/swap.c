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

#include "../include/push_swap.h"

// Swaps the first two elements of stack_a
void	swap_a(bool both)
{
	t_data	*data;
	int	temp;

	data = get_data();
	print_stacks(); // ! DEBUG
	if (data->n_a <= 1)
		return ;
	temp = data->stack_a[0];
	data->stack_a[0] = data->stack_a[1];
	data->stack_a[1] = temp;
	print_stacks(); // ! DEBUG
	if (!both)
		printf("sa\n");
	return ;
}

// Swaps the first two elements of stack_b
void	swap_b(bool both)
{
	t_data	*data;
	int	temp;

	data = get_data();
	print_stacks(); // ! DEBUG
	if (data->n_b <= 1)
		return ;
	temp = data->stack_b[0];
	data->stack_b[0] = data->stack_b[1];
	data->stack_b[1] = temp;
	print_stacks(); // ! DEBUG
	if (!both)
		printf("sb\n");
	return ;
}

// Swaps both stacks top two elements
void	swap_both(void)
{
	print_stacks(); // ! DEBUG
	swap_a(1);
	swap_b(1);
	print_stacks(); // ! DEBUG
	printf("ss\n");
	return ;
}