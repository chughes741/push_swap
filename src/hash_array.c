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

#include "../push_swap.h"

void	hash_array(void)
{
	t_data	*data;
	int		i;
	int		j;
	int		min;

	i = -1;
	data = get_data();
	while (++i < data->n_a)
	{
		j = 0;
		min = 0;
		while (++j < data->n_a)
		{
			if (data->args[j] < data->args[min])
				min = j;
		}
		data->stack_a[min] = i;
	}
	for (int i = 0; i < data->n_a; ++i)
		printf("%i ", data->stack_a[i]);
	printf("\n");
}
