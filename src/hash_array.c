/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:53:39 by chughes           #+#    #+#             */
/*   Updated: 2022/06/20 14:53:40 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	hash_array(void)
{
	t_data	*data;
	int		i;
	int		j;
	int		position;

	i = -1;
	data = get_data();
	while (++i < data->n_a)
	{
		j = -1;
		position = 0;
		while (++j < data->n_a)
		{
			if (data->args[j] < data->args[i] && j != i)
				position += 1;
		}
		data->stack_a[i] = position;
	}
}
