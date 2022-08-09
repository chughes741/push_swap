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
	hash_array();
	return ;
}
