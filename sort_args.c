/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:17:04 by chughes           #+#    #+#             */
/*   Updated: 2022/06/15 15:17:06 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	**sort_args(int argc, int **unsorted_set)
{
	int	**sorted_set;
	int	max_bits;

	sorted_set = ft_calloc(argc, sizeof(int));
	max_bits = find_max_bits(unsorted_set);
	sorted_set = radix_sort(unsorted_set, max_bits);
	return (sorted_set);
}
