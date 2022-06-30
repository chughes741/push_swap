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
void	rotate_a(bool both)
{
	t_data	*data;
	int	temp;
	int	i;

	data = get_data();
	print_stacks(); // ! DEBUG
	if (data->n_a <= 1)
		return ;
	i = -1;
	temp = data->stack_a[0];
	while (++i < data->n_a - 1)
		data->stack_a[i] = data->stack_a[i + 1];
	data->stack_a[i] = temp;
	print_stacks(); // ! DEBUG
	if (!both)
		printf("ra\n");
	return ;
}

// Shift all elements up in stack_b, first becomes the last
void	rotate_b(bool both)
{
	t_data	*data;
	int	temp;
	int	i;

	data = get_data();
	print_stacks(); // ! DEBUG
	if (data->n_b <= 1)
		return ;
	i = -1;
	temp = data->stack_b[0];
	while (++i < data->n_b - 1)
		data->stack_b[i] = data->stack_b[i + 1];
	data->stack_b[i] = temp;
	print_stacks(); // ! DEBUG
	if (!both)
		printf("rb\n");
	return ;
}
	
void	rotate_both(void)
{
	print_stacks(); // ! DEBUG
	rotate_a(1);
	rotate_b(1);
	print_stacks(); // ! DEBUG
	printf("rr\n");
	return ;
}
