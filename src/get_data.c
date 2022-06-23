/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:33:54 by chughes           #+#    #+#             */
/*   Updated: 2022/06/23 13:37:44 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_data	*get_data(void)
{
	static t_data* data = NULL;

	if (data == NULL)
	{
		data = ft_calloc(1, sizeof(t_data));
		// data->n_a = argc - 1;
		// data->stack_a = ft_calloc(argc, sizeof(int));
		// data->stack_b = ft_calloc(argc, sizeof(int));
		data->moves = ft_calloc(1, sizeof(char));
		// data->args = parse_args(argc, argv);
	}
	return (data);
}
