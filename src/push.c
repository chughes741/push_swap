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

#include "../include/push_swap.h"

// Push top element from stack_b to stack_a
void	push_a(void)
{
	t_data	*data;
	int		i;

	data = get_data();
	print_stacks(); // ! DEBUG
	if (data->n_b == 0)
		return ;
	if (data->n_a != 0)
	{
		i = data->n_a + 1;
		while (--i)
			data->stack_a[i] = data->stack_a[i - 1];
	}
	data->stack_a[0] = data->stack_b[0];
	i = -1;
	while (++i < data->n_b - 1)
		data->stack_b[i] = data->stack_b[i + 1];
	data->n_a += 1;
	data->n_b -= 1;
	print_stacks(); // ! DEBUG
	printf("pa\n");
	return ;	
}

// Push top element from stack_a to stack_b
void	push_b(void)
{
	t_data	*data;
	int		i;

	data = get_data();
	print_stacks(); // ! DEBUG
	if (data->n_a == 0)
		return ;
	if (data->n_b != 0)
	{
		i = data->n_b + 1;
		while (--i)
			data->stack_b[i] = data->stack_b[i - 1];
	}
	data->stack_b[0] = data->stack_a[0];
	i = -1;
	while (++i < data->n_a - 1)
		data->stack_a[i] = data->stack_a[i + 1];
	data->n_a -= 1;
	data->n_b += 1;
	print_stacks(); // ! DEBUG
	printf("pb\n");
	return ;	
}
