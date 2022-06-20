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

void	hash_array(unsigned *array, unsigned n)
{
	unsigned	i;
	unsigned	j;
	unsigned	min_val;

	i = -1;
	while (++i <= n)
	{
		min_val = UINT32_MAX;
		j = -1;
		while (++j < n)
		{
			if (array[j] > i + 1 && array[j] < min_val)
				min_val = array[j];
		}
		j = -1;
		while (++j < n)
		{
			if (array[j] == min_val)
				array[j] = i;
		}
	}
}
