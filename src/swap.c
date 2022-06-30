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
// void	swap_a(bool both)
// {
	// t_data	*data;
	// int	temp;
// 
	// data = get_data();
	// print_stacks(); // TESTING
	// if (data->n_a <= 1)
		// return ;
	// temp = data->stack_a[0];
	// data->stack_a[0] = data->stack_a[1];
	// data->stack_a[1] = temp;
	// print_stacks(); // TESTING
	// if (!both)
		// printf("sa\n");
	// return ;
// }

// Swaps the first two elements of stack_b
// void	swap_b(bool both)
// {
	// t_data	*data;
	// int	temp;
// 
	// data = get_data();
	// print_stacks(); // TESTING
	// if (data->n_b <= 1)
		// return ;
	// temp = data->stack_b[0];
	// data->stack_b[0] = data->stack_b[1];
	// data->stack_b[1] = temp;
	// print_stacks(); // TESTING
	// if (!both)
		// printf("sb\n");
	// return ;
// }

// Swaps element pointed to by top_a with the next one
void	swap_a(bool both)
{
	print_stacks(); // ! DEBUG
	t_data	*data;
	int		temp;

	data = get_data();
	if (data->n_a <= 1)
		return ;
	temp = data->stack_a[data->top_a];
	if (data->top_a < data->n_a - 1)
	{
		data->stack_a[data->top_a] = data->stack_a[data->top_a + 1];
		data->stack_a[data->top_a + 1] = temp;
	}
	else
	{
		data->stack_a[data->top_a] = data->stack_a[0];
		data->stack_a[0] = temp;
	}
	print_stacks(); // ! DEBUG
	if (!both)
		printf("sa\n");
	return ;
}

// Swaps element pointed to by top_a with the next one
void	swap_b(bool both)
{
	print_stacks(); // ! DEBUG
	t_data	*data;
	int		temp;

	data = get_data();
	if (data->n_b <= 1)
		return ;
	temp = data->stack_b[data->top_b];
	if (data->top_b < data->n_b - 1)
	{
		data->stack_b[data->top_b] = data->stack_b[data->top_b + 1];
		data->stack_b[data->top_b + 1] = temp;
	}
	else
	{
		data->stack_b[data->top_b] = data->stack_b[0];
		data->stack_b[0] = temp;
	}
	print_stacks(); // ! DEBUG
	if (!both)
		printf("sb\n");
	return ;
}

// Swaps both stacks top two elements
void	swap_both(void)
{
	// t_data	*data;

	// data = get_data();
	// print_stacks(); // TESTING
	swap_a(1);
	swap_b(1);
	// print_stacks(); // TESTING
	printf("ss\n");
	return ;
}