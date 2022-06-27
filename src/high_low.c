/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   high_low.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:13:35 by chughes           #+#    #+#             */
/*   Updated: 2022/06/27 16:13:38 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Returns the position of the lowest value in stack_a
int	lowest_a(void)
{
	t_data	*data;
	int		i;
	int		position;

	data = get_data();
	i = 0;
	position = 0;
	while (++i < data->n_a)
	{
		if (data->stack_a[i] < data->stack_a[position])
			position += i;
	}
	return (position);
}

// Returns the position of the lowest value in stack_b
int	lowest_b(void)
{
	t_data	*data;
	int		i;
	int		position;

	data = get_data();
	i = 0;
	position = 0;
	while (++i < data->n_b)
	{
		if (data->stack_b[i] < data->stack_b[position])
			position += i;
	}
	return (position);
}

// Returns the position of the highest value in stack_a
int	highest_a(void)
{
	t_data	*data;
	int		i;
	int		position;

	data = get_data();
	i = 0;
	position = 0;
	while (++i < data->n_a)
	{
		if (data->stack_a[i] > data->stack_a[position])
			position += i;
	}
	return (position);
}

// Returns the position of the highest value in stack_b
int	highest_b(void)
{
	t_data	*data;
	int		i;
	int		position;

	data = get_data();
	i = 0;
	position = 0;
	while (++i < data->n_b)
	{
		if (data->stack_b[i] > data->stack_b[position])
			position += i;
	}
	return (position);
}
