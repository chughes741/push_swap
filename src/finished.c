/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finished.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:09:57 by chughes           #+#    #+#             */
/*   Updated: 2022/06/27 16:10:01 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Checks stack_a and returns true is all elements are sorted
bool	finished(void)
{
	t_data	*data;
	int		n;

	data = get_data();
	n = 0;
	while (++n < data->n_a)
	{
		if (data->stack_a[n] <= data->stack_a[n - 1])
			return (false);
	}
	return (true);
}

