/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:17:23 by chughes           #+#    #+#             */
/*   Updated: 2022/06/15 15:17:25 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

array	parse_args(int argc, char **argv)
{
	array	unsorted_set;
	int		i;

	i = -1;
	unsorted_set = ft_calloc(argc, sizeof(int));
	while (argv[++i + 1] && i < argc - 1)
		unsorted_set[i] = ft_atoi(argv[i + 1]);
	return (unsorted_set);
}
