/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   var_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 12:55:51 by chughes           #+#    #+#             */
/*   Updated: 2022/06/23 12:55:53 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_array	*var_init(t_array *var, int argc, char **argv)
{
	var = ft_calloc(1, sizeof(t_array));
	var->n_a = argc - 1;
	var->stack_a = ft_calloc(argc, sizeof(int));
	var->stack_b = ft_calloc(argc, sizeof(int));
	var->moves = ft_calloc(1, sizeof(char));
	var->args = parse_args(argc, argv);
	return (var);
}