/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_up.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:55:36 by chughes           #+#    #+#             */
/*   Updated: 2022/06/24 14:55:57 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	count_args(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
		i++;
	return (i);
}

void	pre_sorted(void)
{
	t_data	*data;
	int		n;

	data = get_data();
	n = 0;
	while (++n < data->size)
	{
		if (data->args[n] <= data->args[n - 1])
		{
			del_data();
			exit(1);
		}
	}
	return ;
}

void	set_up(char **argv)
{
	t_data	*data;

	data = get_data();
	data->args = parse_args(count_args(argv), argv);
	data->size = count_args(argv);
	data->n_a = data->size;
	data->chunk = data->size;
	data->stack_a = ft_calloc(data->n_a, sizeof(int));
	data->stack_b = ft_calloc(data->n_a, sizeof(int));
	pre_sorted();
	hash_array();
	return ;
}
