/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:00:14 by chughes           #+#    #+#             */
/*   Updated: 2022/06/20 15:00:16 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	insertion_sort(void)
{
	t_data	*data;

	data = get_data();
	while (data->n_a)
	{
		while (lowest_a() != 0)
		{
			if (highest_a() != 0)
			{
				if (lowest_a() < data->n_a / 2)
					rotate_a(0);
				else
					r_rotate_a(0);
			}
			else
			{
				push_b();
				rotate_b(0);
			}
		}
		push_b();
	}
	while (highest_b() != 0)
		r_rotate_b(0);
	while (data->n_b)
		push_a();
	return ;
}

void	list_moves(void)
{
	insertion_sort();
	return ;
}
