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

void	set_up(int argc, char **argv)
{
	t_data	*data;

	data = get_data();
	data->args = parse_args(argc, argv);
	data->size = argc - 1;
	data->n_a = data->size; // TODO inputs as single string
	data->chunk = data->size;
	data->stack_a = ft_calloc(data->n_a, sizeof(int));
	data->stack_b = ft_calloc(data->n_a, sizeof(int));
	hash_array();
	return ;
}
