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

#include "../include/push_swap.h"

// Shift all elements down in stack_a, last becomes the first
void	r_rotate_a(bool both)
{
	t_data	*data;
	int		temp;
	int		i;

	data = get_data();
	print_stacks(); // ! DEBUG
	if (data->n_a <= 1)
		return ;
	temp = data->stack_a[data->n_a - 1];
	i = data->n_a;
	while (--i)
		data->stack_a[i] = data->stack_a[i - 1];
	data->stack_a[0] = temp;
	print_stacks(); // ! DEBUG
	if (!both)
		printf("rra\n");
	return ;
}

// Shift all elements down in stack_b, last becomes the first
void	r_rotate_b(bool both)
{
	t_data	*data;
	int		temp;
	int		i;

	print_stacks(); // ! DEBUG
	data = get_data();
	if (data->n_b <= 1)
		return ;
	temp = data->stack_b[data->n_b - 1];
	i = data->n_b;
	while (--i)
		data->stack_b[i] = data->stack_b[i - 1];
	data->stack_b[0] = temp;
	print_stacks(); // ! DEBUG
	if (!both)
		printf("rrb\n");
	return ;
}

// Shifts all elements down one in both stacks
void	r_rotate_both(void)
{
	print_stacks(); // ! DEBUG
	r_rotate_a(1);
	r_rotate_b(1);
	print_stacks(); // ! DEBUG
	printf("rrr\n");
	return ;
}
