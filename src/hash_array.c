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
// 17 args
void	hash_array(t_data *var)
{
	int	i;
	int	j;
	int	min;

	i = -1;
	while (++i < var->n_a)
	{
		j = 0;
		min = 0;
		while (++j < var->n_a)
		{
			if (var->args[j] < var->args[min])
				min = j;
		}
		var->stack_a[min] = i;
	}	
}
