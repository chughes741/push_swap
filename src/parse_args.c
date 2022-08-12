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

int	*parse_args(int argc, char **argv)
{
	int	*unsorted_set;
	int	i;

	i = -1;
	unsorted_set = ft_calloc(argc, sizeof(int));
	while (argv[++i] && i < argc)
		unsorted_set[i] = ft_atoi(argv[i]);
	return (unsorted_set);
}
