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
		if (lowest_a() == 0)
			push_b();
		else
			rotate_a(0);
	}
	while (data->n_b)
		push_a();
	return ;
}


void	list_moves(void)
{
	insertion_sort();
	return ;
}
